#include<stdio.h>
#include<math.h>
float returnwithoutPrompt(float w){
    scanf("%f",&w);
    return w;
}
int main() 
{
    float w = returnwithoutPrompt(w);
    float y,x,h,BMI;
    scanf("%f",&x);
    y=x/100;
    h = pow(y,2);
    BMI=w/h;
    printf("BMI score is :%.2lf\n",BMI);
    if(BMI < 0)
    {
        printf("Error");
    }
    else if(BMI < 18.5)
    {
        printf("underweight");
    }
    else if(BMI >= 18.5 && BMI <= 24.99 )
    {
        printf("normal");
    }
    else if(BMI >= 25.0 && BMI <= 29.99 )
    {
        printf("overweight");
    }
    else if(BMI >= 30.0 && BMI <= 50.0 )
    {
        printf("too fat");
    }
    else if(BMI < 0)
    {
        printf("Error");
    }
    else
    {
        printf("Error");
    }
    
    return 0;
}
