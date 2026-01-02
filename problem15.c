#include<stdio.h>
int main()
{
    int days;

    int years, rd, m, day;

    scanf("%d", &days);

    years = days / 365;

    rd = days % 365;

    m = rd /30;

    day = rd % 30;

    printf("%d ano(s)\n", years);

    printf("%d mes(es)\n",m);

    printf("%d dia(s)\n", day);

    return 0;
}
