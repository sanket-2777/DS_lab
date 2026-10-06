#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> cancelledOrders;
    int orderNumber;


    cout << "Enter 5 cancelled order numbers:\n";

    for (int i = 0; i < 5; i++) {
        string ordernumber;
        cout<<"Enter cancelled order"<<i+1<<":"; 
        cin >> orderNumber;
        cancelledOrders.push(orderNumber);
    }

    // Display orders from most recently cancelled
    cout << "\nCancelled orders (most recent first):\n";

    while (!cancelledOrders.empty()) {
        cout << cancelledOrders.top() << endl;
        cancelledOrders.pop();
    }

    return 0;
}

