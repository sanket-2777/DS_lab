#include <iostream>
using namespace std;

int main()
{
    int rollno[5];

    // Store roll numbers
    cout << "Enter roll numbers of 5 students:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> rollno[i];
    }

    // Display roll numbers
    cout << "\nRoll numbers entered by the user:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << rollno[i] << endl;
    }

    return 0;
}
