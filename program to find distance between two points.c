
//program to find the distance between two points

#include<stdio.h>
#include<math.h>


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
} 