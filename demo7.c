#include<stdio.h>
void main(){
    printName();
char c[]="shoiab";
    printName2(c);
    int result=add(10,30);
    printf("Result...:%d",result);
    printf("Lottery Result...:%d",lottery(9999));
}
void printName(){
    printf("My name is shoiab.....");
}
//we cannot have two methods with the same name in C Language - because C is a structured language
void printName2(char c[]){
    printf("%s",c);
}
int add(int n1,int n2){
    return n1+n2;
    return 10;//this statement is ignored
}
int lottery(int n){
    if(n==1){
        return 100;
    }
    else if(n==333){
        return 10000;
    }
    else if(n==9999){
        return 1000000;
    }
}
