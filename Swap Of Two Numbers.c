#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, temp;
    printf("Enter The First Number: ");
    scanf("%d", &num1);
    printf("Enter The Second Number: ");
    scanf("%d", &num2);
    
    printf("The Number Before Swap are num1: %d, num2: %d\n",num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("The Number After Swap are num1: %d, num2: %d\n",num1, num2);

    printf("The Swapping Of Numbers intercut using ternary variable\n");
    printf("Without Using Temporary Variable\n");

    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;

    printf("The Number After Second Swap are num1: %d, num2: %d\n",num1, num2);
    
    return 0;
}
