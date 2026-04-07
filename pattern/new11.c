#include<stdio.h>

int main(){

    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int newarr[]={0,0,0,0,0};

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    for(int i=0;i<n;i++){
        for( int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

            
        }
    }
    

      for(int i=0;i<n;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    

    
    

}