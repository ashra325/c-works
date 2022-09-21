#include <stdio.h>
/*int main(){
int n=10;
while(n>0){
    int i=0;
    while(i<n){
        printf("*\t");
        i++;
    }
    printf("\n");
    n--;

    }

}*/
#include<stdio.h>
int main(){
    int n=10;
    while(n>0){
        int i=0;
        while(i<n){
               i++;
        printf("%d\t",n);
    }
        printf("\n");
        n--;
 }
 //outer loop
 int x=3;//initialization
 while(x>0){//condition
    x--;//incrementation/decrementation
    printf("outer loop....");
    int y=3;
    while(y>0){
        y--;
        printf("\inner loop...\n");
    }
 }
}
