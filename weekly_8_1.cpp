//รับค่าตัวเลข 2 จำนวน เก็บใน x และ y ตามลำดับ จากนั้นให้ทำการสลับค่ากัน โดยห้ามสร้างตัวแปรเพิ่ม (Level 5)
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Input :";
    cin >> a >> b ;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout <<"Output :"<< a <<" " << b;
    return 0;
} 