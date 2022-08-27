#include <stdio.h>
int main(){
    int n1=10;
    int n2=20;
    //Relational operator
    printf("Comparison....:%d\n",n1==n2);
    printf("greater than...:%d\n",n1>n2);
    printf("lesser than....:%d\n",n1<n2);
    printf("greater than or equal to...:%d\n",n1>=n2);
    printf("lesser than or equal to...:%d\n",n1<=n2);
    //logical operator
    printf("\n%d\n",(n1>n2 || n1==n2));
    printf("%d\n",(n1<n2 && n1==n2));
    printf("%d\n",(!(n1>n2 || n1==n2)));
    printf("%d\n",n1!=n2);
    }
