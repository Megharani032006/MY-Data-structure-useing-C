DISPLAY SUM
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a,n,sum=0;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){scanf("%d",&a[i]); sum+=a[i];}
    printf("Sum=%d",sum);
    free(a);
}
OUTPUT
4
  10,20,30,40
  SUM=100
  
