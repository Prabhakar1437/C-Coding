#include <iostream>
using namespace std;
int main()
{
    cout << "Manu\n";
    cout << "1.Add\n"
         << "2.Sub\n"
         << "3.Multi\n"
         << "4.Div\n"
         << "5.Remain";
    int option;
    cout << "Enter the choice :";
    cin >> option;
    int a, b, c;
    cout << "Enter two number :";
    cin >> a >> b;
    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    case 5:
        c = a % b;
        break;
    }
    cout << "Result is :" << c << endl;
    return 0;
}
