#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> customers;

    // Store 5 customer token numbers
    cout << "Enter 5 customer token numbers:\n";
    for (int i = 0; i < 5; i++) {
        int token;
        cin >> token;
        customers.push(token);
    }

    // Serve customers in the same order
    cout << "\nCustomers are served in this order:\n";

    while (!customers.empty()) {
        cout << "Serving customer with token number: "
             << customers.front() << endl;

        customers.pop();
    }

    return 0;
}
