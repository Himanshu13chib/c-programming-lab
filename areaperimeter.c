//program to calculate area and perimeter of circle,square and rectangle
#include<stdio.h>
int main()
{
    //circle
    float pi=3.14,r;
    printf("enter the radius of a circle");
    scanf("%f",&r);
    printf("area of circle=%f\n",pi*r*r);
    printf("perimeter of a circle=%f\n",2*pi*r);
    
    //rectangle
    float l,b;
    printf("enter length and breth of rectangle");
    scanf("%f%f",&l,&b);
    printf("area of rectangle=%f\n",l*b);
    printf("perimeter of rectangle=%f\n",2*l+b);
  
    //square
    
    float s;
    printf("enter side of square");
    scanf("%f",&s);
    printf("area of square=%f",s*s);
    printf("perimeter of square:%f\n",4*s);
    
    return 0;
}    