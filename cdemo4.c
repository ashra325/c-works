#include<stdio.h>
int main(){
    //for(int i=10;i>0;--i){
     //   printf("loop ............:%d\n",i);
    //}
    for(int i=0;i<10;i++){
        for(int j=0;j<i;j++){
            printf("*\t");
        }
        printf("\n");
    }
printf("\nNext triangle....\n");
     for(int i=0;i<10;i++){
        for(int j=10;j>i;j--){
            printf("*\t");
        }
        printf("\n");
    }
}
