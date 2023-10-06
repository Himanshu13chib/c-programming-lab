//program to print hello world
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



