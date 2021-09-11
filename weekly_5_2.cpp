// จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "intput :"<< str;
    cin >> str;
    int i = 0;
    int j = str.size()-1;
    while(j > i)
    {
        char temp;
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        ++i;
        --j;
        
    }
    cout << "Output :" << str << endl;
    return 0;
}