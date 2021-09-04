#include<stdio.h>
long int main()
{
    int  num1,num2,num3,x,y,z;
     scanf("%ld %ld %ld",&num1,&num2,&num3);
    x=num1+num2;
    y=num1+num3;
	  z=num2+num3;
      if (x >= y && x >= z) 
      {
        printf("%ld + %ld = %ld",num1,num2,x);
      } 
      else if (y >= x && y >= z) 
      {
        printf("%ld + %ld = %ld",num1,num3,y);
      } 
      else if (z >= y && z >= x)
      { 
        printf("%ld + %ld = %ld",num2,num3,z);
      }
    return 0;
}