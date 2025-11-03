SQUARE OF ELEMENT
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a,n;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) printf("%d ",a[i]*a[i]);
    free(a);
}
OUTPUT
4
2,4,6,8
4 16 36 64
