
#include <stdio.h>

int main() {
    double salary, new_salary, reajuste_ganho;
    int percentual;

    scanf("%lf", &salary);

    if (salary <= 400.00) {
        percentual = 15;
    }

    else if (salary <= 800.00) {
        percentual = 12;
    }
    else if (salary <= 1200.00) {

        percentual = 10;
    }

     else if (salary <= 2000.00) {
        percentual = 7;
    }
    else {
        percentual = 4;
    }

    reajuste_ganho = salary * percentual / 100.0;

    new_salary = salary + reajuste_ganho;

    printf("Novo salario: %.2lf\n", new_salary);

    printf("Reajuste ganho: %.2lf\n", reajuste_ganho);

    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
