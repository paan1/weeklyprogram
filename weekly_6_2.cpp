#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cout << "input :";
    cin >> str;
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    cout << "Output :" << str[i-1];
    return 0;
}
