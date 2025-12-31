#include<stdio.h>

int main()
{
    int NUMBER, HOURS;

    float per_hour, SALARY;

    scanf("%d %d", &NUMBER, &HOURS);

    scanf("%f", &per_hour);

    SALARY = HOURS * per_hour;

    printf("NUMBER = %d\n", NUMBER);

    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}
