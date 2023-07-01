#include<stdio.h>
#define SQR(X) X*X

main(){
    int a = 16,k=2,m=1;
    a /= SQR(k+m)/SQR(k+m);
    int y = SQR(k+m)/SQR(k+m);
    printf("%d\n",a);    
    printf("%d\n",y);
}