#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "input :";
    getline(cin, str);
    cout << "Output :" << str[str.length() - 1] << endl;
    return 0;
}