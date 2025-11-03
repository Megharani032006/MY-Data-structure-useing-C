#include <stdio.h>
int main() {
    int a=10,b=20;
    int *p=&a;
    int *q=&b;
    int sum=*p+*q;
    printf("%d",sum);
    return 0;
}
OUTPUT
30
