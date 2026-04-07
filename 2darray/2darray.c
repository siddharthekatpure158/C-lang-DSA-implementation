#include<stdio.h>
int main(){
    printf("Enter No of rows and columns:");
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int arr1[row][col];

    printf("Enter elements of the array");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter elements of the array");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int mul=arr[i][j]*arr1[j][i] ;
            printf("%d ",mul);
        }
        printf("\n");
    }


    
}