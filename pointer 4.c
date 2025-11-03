swapping of numbers
#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp= *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a=5,b=10;
swap(&a,&b);
printf("after swapping:a=%d,b=%d",a,b);
}
output

after swapping:a=10,b=5
