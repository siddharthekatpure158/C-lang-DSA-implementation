#include<stdio.h>

void fib(int first,int second,int n){
    if(n==0){
        return ;
    }
    printf("%d ",first);

    int third=first+second;

    fib(second,third,--n);
        
 
       
        
        }
int main(){
  

    fib(0,1,10);
    
    return 0;
}
