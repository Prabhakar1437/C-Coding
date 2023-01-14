#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "May I know your name  ";
    getline(cin, str); //cin>>str; for one word
    cout << " Hello " << str ;
    return 0;
}