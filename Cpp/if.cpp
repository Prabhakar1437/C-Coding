#include <iostream>
using namespace std;
int main()
{
    int roll;
    cout << "Enter rollno.";
    cin >> roll;
    if (roll <= 0)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        cout << "Valid" << endl;
    }
    return 0;
}