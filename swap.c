#include <stdio.h>
void swap1(int *x, int *y) {
int temp;
temp = *x;
*x = *y;
*y = temp;
}

int main()
{
    int a, b; 
    printf("Before swaping value of a, b are \n");
    scanf("%d %d", &a, &b);
    swap1(&a, &b);
    printf("After swaping by using call of reference value of a, b is : %d %d", a, b);
    return 0;
}