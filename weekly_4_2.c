#include<stdio.h>
int main()
{
    long int  x,y,z,sum;
     scanf("%ld %ld %ld",&x,&y,&z);
      if (z <= x && z <= y) 
      {
       z=0;
       printf("%ld + %ld = ",x,y);
      } 
      else if (y <= z && y <= x) 
      {
        y=0;
        printf("%ld + %ld = ",z,x);
      } 
      else if (x <= y && x <= z)
      { 
        x=0;
        printf("%ld + %ld = ",y,z);
      }
      sum = x+y+z;
      printf("%ld",sum);
    return 0;
}