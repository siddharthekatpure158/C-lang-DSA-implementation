#include<stdio.h>
int main(){
    int a=1;
    int n;
    int sum=0;
    printf("Enter number");
    scanf("%d",&n);
    while(a<=n){
        sum=sum+a;
        a++;
    }
    printf("%d",sum);
}