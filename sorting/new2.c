#include<stdio.h>
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int flag=1,choice;
    while(flag){
        printf("1.Display\n2.Insert\n3.update\n4.delete\n5.exit\n");
        printf("Enter your Choice:");
        
         scanf("%d",&choice);
    switch (choice)
    {
    case 1:for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } 
    flag=0;
    
    // 1 2 3 4 5 index=1 element=5
    case 2:
    int element,index,answer=0;
    printf("Enter Element:");
    scanf("%d",&element);
    scanf("%d",&index);
    for (int i = 0; i < n+1; i++)
    {   
        answer=arr[i];
        if(i==index){
            
            arr[i]=element;
        }
        else{
            arr[i]=answer;
        }
        
    }
    
   


        }
        
    }

    

    return 0;
}