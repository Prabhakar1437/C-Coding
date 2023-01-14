#include <iostream>
using namespace std;
int main()
{
    int days;
    cout << "Enter days no. ";
    cin >> days;
    switch (days)
    {
    case 1:
        cout << "Mon" << endl;
        break;
    case 2:
        cout << "Tue" << endl;
        break;
    case 3:
        cout << "Wed" << endl;
        break;
    case 4:
        cout << "Thrus" << endl;
        break;
    case 5:
        cout << "Fri" << endl;
        break;
    case 6:
        cout << "Sat" << endl;
        break;
    case 7:
        cout << "sun" << endl;
        break;
    default:
        cout << "Invalid days" << endl;
    }
    return 0;
}