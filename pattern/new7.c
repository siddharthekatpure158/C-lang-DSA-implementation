#include <stdio.h>

int main(){
    int n;
    printf("Enter Num:");
    scanf("%d",&n);
    int space=n-1;
    int space2=1;
 for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
         printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        
        
        
        printf("\n");
        
        space--;
    }
    int star=2*n-3;

    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=space2;j++){
         printf(" ");
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        space2++;
        star=star-2;
    }

    return 0;
}