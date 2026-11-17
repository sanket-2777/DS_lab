#include <iostream>
#include <string>
using namespace std;

#define SIZE 10

struct Product {
    int id;
    string name;
    float price;
    Product* next;
};

Product* head = NULL;
Product* hashTable[SIZE] = {NULL};

// Hash Function
int hashFunction(int id) {
    return id % SIZE;
}

// Add Product
void addProduct() {
    int id;
    string name;
    float price;

    cout << "Enter Product ID: ";
    cin >> id;

    // Check Unique ID
    Product* temp = hashTable[hashFunction(id)];

    while (temp != NULL) {
        if (temp->id == id) {
            cout << "Product ID already exists!\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Enter Product Name: ";
    cin >> name;

    cout << "Enter Price: ";
    cin >> price;

    Product* newProduct = new Product;
    newProduct->id = id;
    newProduct->name = name;
    newProduct->price = price;

    // Insert into Linked List
    newProduct->next = head;
    head = newProduct;

    // Insert into Hash Table
    int index = hashFunction(id);
    newProduct->next = hashTable[index];
    hashTable[index] = newProduct;

    cout << "Product Added Successfully!\n";
}

// Remove Product
void removeProduct() {
    int id;

    cout << "Enter Product ID: ";
    cin >> id;

    Product* temp = head;
    Product* prev = NULL;

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Product Not Found!\n";
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    delete temp;

    cout << "Product Removed Successfully!\n";
}

// Display Products
void displayProducts() {
    Product* temp = head;

    if (temp == NULL) {
        cout << "No Products Available!\n";
        return;
    }

    while (temp != NULL) {
        cout << "\nProduct ID: " << temp->id;
        cout << "\nProduct Name: " << temp->name;
        cout << "\nPrice: " << temp->price << endl;

        temp = temp->next;
    }
}

// Main Function
int main() {
    int choice;

    do {
        cout << "\n1. Add Product";
        cout << "\n2. Remove Product";
        cout << "\n3. Display Products";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct();
                break;

            case 2:
                removeProduct();
                break;

            case 3:
                displayProducts();
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 4);

    return 0;
}
