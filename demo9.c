#include<stdio.h>
int main(){
    int marks[]={10,20,40,20};
    marks[1]=300;
    printf("%d\n",marks[4]);
    for(int i=0;i<4;i++){
        printf("%d\t",marks[i]);
    }
    for(int i=0;i<4;i++){
        switch(marks[i]){
            case 10:{
                printf("Your score %d is very low...",marks[i]);
                break;
            }
            case 20:{
                printf("Your score %d is low...",marks[i]);
                break;
            }
            case 40:{
                printf("Your score %d good...",marks[i]);
                break;
            }
            default:{
                printf("Excellent....%d",marks[i]);
            }
        }
    }
}
