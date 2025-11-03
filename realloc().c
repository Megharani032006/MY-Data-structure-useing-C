#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, n;
    scanf("%d", &n);
    a = (int*) malloc(n * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    // increase size
    int new;
    scanf("%d", &new);
    a = (int*) realloc(a, new * sizeof(int));
    for(int i=n;i<new;i++) scanf("%d",&a[i]);

    for(int i=0;i<new;i++) printf("%d ",a[i]);
    free(a);
}
Input:
3
10 20 30
5
40 50

Output:
10 20 30 40 50
