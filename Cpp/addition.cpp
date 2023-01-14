#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter two number :";
    cin >> a >> b;
    c = a % b;
    cout << "Remainder is :" << c << endl;
    return 0;
}