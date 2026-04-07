#include <stdio.h>

int main(){
    int month;
    printf("enter month");
    scanf("%d",&month);
   
    switch (month)
    {
    case 1:printf("Januavary");break;
    case 2:printf("Februvary");break;
    case 3:printf("march");break;
    case 4:printf("April");break;
    case 5:printf("May");break;
    case 6:printf("June");break;
    case 7:printf("July");break;
    case 8:printf("August");break;
    case 9:printf("September");break;
    case 10:printf("Octuber");break;
    case 11:printf("November");break;
    case 12:printf("December");break;
    
    

    default:printf("invalid choice...");
    }


   
    return 0;

}

