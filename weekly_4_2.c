#include<stdio.h>
int main()
{
    int  x,y,z,sum;
     scanf("%d %d %d",&x,&y,&z);
      if (z <= x && z <= y) 
      {
       z=0;
       printf("%d + %d = ",x,y);
      } 
      else if (y <= z && y <= x) 
      {
        y=0;
      } 
      else if (x <= y && x <= z)
      { 
        x=0;
      }
      sum = x+y+z;
      printf("%d",sum);
    return 0;
}