/*//program to print hello world
#include<stdio.h>
int main(){
    printf("hello world");
    return 0;
}

//program to print hello world using  new line character
#include<stdio.h>
int main(){
    printf("helloworld\nhellowworld");
    return 0;
}

//program to print hello world using tab character
#include<stdio.h>
int main(){
    printf("helloworld\thelloworld");
    return 0;
}


//program for addition, subtraction, multiplication, modulus of two no.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);

    int addition=a+b;
    int subtraction=a-b;
    int multiplication=a*b;
    int modulus=a%b;

    printf("addition of two no:%d",addition);
    printf("subtraction of two no:%d",subtraction);
    printf("multiplication of two no:%d",multiplication);
    printf("modulus of two no:%d",modulus);
    return 0;
}

//program to find the distance between two points

/*#include<stdio.h>
#include<maths.h>

int main()
{
    int x1,x2,y1,y2;

    printf("enter the value of x1");
    scanf("%d",&x1);

    printf("enter the value of y1");
    scanf("%d",&y1);

    printf("enter the value of x2");
    scanf("%d",&x2);

    printf("enter the value of y2");
    scanf("%d",&y2);

    int distance=sqrt((x2-x1)^2+(y2-y1)^2);

    printf("distance between two no:%d",distance);
    return 0;
} */   

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