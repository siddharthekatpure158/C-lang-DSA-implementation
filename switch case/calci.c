#include <stdio.h>

int main(){
    int a,b,choice;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("1.Addition\n2.substraction\n3.multiplication\n4.division\n5.reminder\n");
    printf("Enter choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("%d",(a+b));break;
    case 2:printf("%d",(a-b));break;
    case 3:printf("%d",(a*b));break; 
    case 4:printf("%d",(a/b));break;
    case 5:printf("%d",(a%b));break;

    default:printf("invalid choice...");
    }


   
    return 0;

}

