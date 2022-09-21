#include<stdio.h>
int main(){
int n=0;
while(n<10){
    int i=11;
    while(i>n){
        printf("%d\t",n);
        i--;
    }
    printf("\n");
    n++;
}
}
