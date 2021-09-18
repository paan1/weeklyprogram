//จงเขียนโปรแกรมรับ string มา 1 ชุด แล้วหาว่าตัวอักษรใดที่เป็นตัวอักษรหลังสุด (Level 3)
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
