#include<stdio.h>
int main(){
    int arr[3][4]={
        {
            10,20,30,40
        },
        {
            100,200,300,400
        },
        {
            1000,2000,3000,4000
        }
    };
    arr[1][2]=333;
    printf("%d\n",arr[1][2]);
    for(int i=0;i<3;i++){//this loop is for the rows...
        for(int j=0;j<4;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
