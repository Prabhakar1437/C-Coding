#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter two no.";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Invalid denominator" << endl;
    }
    else
    {
        c = a / b;
        cout << "Div is " << c << endl;
    }
    return 0;
}
