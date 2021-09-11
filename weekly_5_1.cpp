//จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string rev;
    cout << "intput :"<< str;
	cin >> str;
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    cout << "Output :" << rev << endl;
    return 0;
}