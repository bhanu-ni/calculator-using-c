#include <stdio.h>
#include <math.h>
int main()
{
    double a, b;
    char op;
    printf("Enter any operation from(+, -, *, /, ^)");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    switch (op)
    {
    case '+':
        printf("%.2lf", a + b);
        break;

    case '-':
        printf("%.2lf", a - b);
        break;

    case '*':
        printf("%.2lf", a * b);
        break;

    case '/':
        printf("%.2lf", a / b);
        break;

    case '^':
        printf("%.2lf", pow(a, b));
        break;

    default:
        break;
    }
}
