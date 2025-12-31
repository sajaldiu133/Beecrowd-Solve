#include <stdio.h>
int main()
{
    int code_p1, prod_u1, code_p2, prod_u2;

    float pri_p1, pri_p2, total;

    scanf("%d %d %f", &code_p1, &prod_u1, &pri_p1);

    scanf("%d %d %f", &code_p2, &prod_u2, &pri_p2);

    total = prod_u1 * pri_p1 + prod_u2 * pri_p2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
