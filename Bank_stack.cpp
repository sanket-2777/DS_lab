#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> customer;

    int token;

    // Store 5 customer token numbers
    cout << "Enter 5 customer token numbers:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> token;
        customer.push(token);
    }

    // Display service history
    cout << "\nService History (Most Recent First):" << endl;

    while (!customer.empty())
    {
        cout << "Customer Token No.: " << customer.top() << endl;
        customer.pop();
    }

    return 0;
}
