#include <stdio.h>
int main() {
    int a = 10; 
    int *p;
    p = &a;
    printf("Value of a = %d\n", a);     
    printf("Address of a = %p\n", &a);     
    printf("Value of p = %p\n", p);        
    printf("Value pointed by p = %d\n", *p); 

    return 0;
}
output
Value of a = 10
Address of a = 0x7ffed728b674
Value of p = 0x7ffed728b674
Value pointed by p = 10
