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