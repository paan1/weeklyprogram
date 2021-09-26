/*ให้นักศึกษาเขียนโปรแกรมเพื่อรับข้อมูล String 1 ชุด แล้วแสดงผลลัพธ์โดยเปลี่ยนตัวอักษรตัวพิมพ์เล็กให้กลายเป็นตัวอักษรตัวพิมพ์ใหญ่ 
และตัวอักษรตัวพิมพ์ใหญ่ กลายเป็นตัวอักษรตัวพิมพ์เล็กเช่นรับข้อมูล AbcDefg จะแสดงผล aBCdEFG (Level 3)*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Input :";
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
            if(str[i]>=97 && str[i]<=122)
            {
                str[i]=str[i]-32;
            }
            else if(str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]+32;
            }
    }
    cout << "Output :" << str << endl;
    return 0;
    
}