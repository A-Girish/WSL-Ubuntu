#include <stdio.h>
#include <unistd.h>

int main(){

    int num = 10;
    int *p = &num;
    printf("Value = %d\n address = %p\n", num, p);
    *p = 15;
    printf("Value = %d\n address = %p\n", num, p);

    return 0;
}