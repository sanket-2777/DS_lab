#include <iostream>
using namespace std;

void restaurantMenu()
{
    int choice;

    cout << "\n===== RESTAURANT MENU =====";
    cout << "\n1. Pizza";
    cout << "\n2. Burger";
    cout << "\n3. Pasta";
    cout << "\n4. Sandwich";
    cout << "\n5. Exit";

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "You selected Pizza!";
        restaurantMenu();
    }

    else if (choice == 2)
    {
        cout << "You selected Burger!";
        restaurantMenu();
    }

    else if (choice == 3)
    {
        cout << "You selected Pasta!";
        restaurantMenu();
    }

    else if (choice == 4)
    {
        cout << "You selected Sandwich!";
        restaurantMenu();
    }

    else if (choice == 5)
    {
        cout << "Thank you! Visit Again!";
    }

    else
    {
        cout << "Invalid Choice!";
        restaurantMenu();
    }
}

int main()
{
    restaurantMenu();

    return 0;
}
