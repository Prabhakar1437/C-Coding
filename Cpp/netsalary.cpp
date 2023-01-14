#include <bits/stdc++.h>
using namespace std;
int main()
{
    float BS, NS, POA, POD;
    cout << "Enter the salary";
    cin >> BS >> POA >> POD;
    NS = (BS + (BS * POA / 100) - (BS * POD / 100));
    cout << "Salary is " << NS << endl;
    return 0;
}
