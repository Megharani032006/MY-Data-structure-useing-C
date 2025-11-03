DISPLAY THE ELEMENTS BY USING CALLOC()
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, n;
    scanf("%d", &n);
    a = (int*) calloc(n, sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    free(a);
}
Input:
4
5 10 15 20

Output:
5 10 15 20
