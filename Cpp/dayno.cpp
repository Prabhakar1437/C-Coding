#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter day no.";
    cin >> day;
    if (day == 0)
    {
        cout << "Monday" << endl;
    }
    else if (day == 1)
    {
        cout << "Tuesday" << endl;
    }
    else if (day == 2)
    {
        cout << "Wednesday" << endl;
    }
    else if (day == 3)
    {
        cout << "Thrusday" << endl;
    }
    else if (day == 4)
    {
        cout << "Friday" << endl;
    }
    else if (day == 5)
    {
        cout << "Saturday" << endl;
    }
    else if (day == 6)
    {
        cout << "Sunday" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}