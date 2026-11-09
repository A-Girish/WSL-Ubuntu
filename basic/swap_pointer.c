#include<stdio.h>
#include<unistd.h>

void swap(int *a, int *b){
    int *p = a;
    *a = *b;
    *b = *p;
    printf("a = %d and b = %d\n",*a,*b);
    
}
int main()
{
    int a = 10;
    int b = 20;
    printf("a = %d and b = %d\n",a,b);
    swap(&a,&b);
    return 0;
}