#include<stdio.h>
int main(){
    int a=1;
    int n;
    printf("Enter number");
    scanf("%d",&n);
    while(a<=n){
        if(a%2==0){
            printf("%d",a);
        }
        a++;
        
    }
}