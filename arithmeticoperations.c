
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
    int modulus=a/b;

    printf("addition of two no:%d\n",addition);
    printf("subtraction of two no:%d\n",subtraction);
    printf("multiplication of two no:%d\n",multiplication);
    printf("modulus of two no:%d\n",modulus);
    return 0;
}