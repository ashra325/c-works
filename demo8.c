#include<stdio.h>
 int i=0;//global scope
void main(){
    display();
}
display(){
    if(i<10){
        i++;
        printf("now display is called..again..\n");
        display();//recursion - a method calling by itself is called recursion...
    }
        printf("%d\n",i);
}
