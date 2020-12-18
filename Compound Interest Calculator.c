#include <stdio.h>
#include <math.h>

int main()
{
    float rate, ci;
    int principle, time;
    printf("Enter The Principle Amount: ");
    scanf("%d", &principle);
    printf("Enter The Rate Of Interest: ");
    scanf("%f", &rate);
    printf("Enter The Duratio Od Deposit: ");
    scanf("%d", &time);
    ci = principle * (pow((1 + rate / 100), time));
    printf("\nThe Compount Interest for %d Principle Amount is %.2f", principle, (ci-principle));
    return 0;
}
