#include<stdio.h>
int main(){
    int a=1;
    int n;
    printf("Enter number");
    scanf("%d",&n);
    while(n>=a){
        printf("%d",n);
        n--;
    }
}