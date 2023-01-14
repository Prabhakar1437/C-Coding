#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 nos.";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a;
    }
    else
    {
        if (b > c && b > a)
        {
            cout << b;
        }
        cout << c;
    }
    return 0;
}