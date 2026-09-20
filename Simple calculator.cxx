#include <stdio.h>
#include <math.h>

int main()
{
    int option;
    int i, n;
    double v[n], p[2];
    double sum, sub, multi, div;

    while (1)
    {
        printf("\nWhat you want to do?\n\n");
        printf("1. Addition\n2. Subtraction\n3.Multiplication\n4.Division\n");
        printf("\nChoose value corresponding to what you want= ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\n\nHow many numbers you are going to add= ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nEnter the %d value= ", i + 1);
                scanf("%lf", &v[i]);
            };
            sum = 0;
            for (i = 0; i < n; i++)
            {
                sum = sum + v[i];
            };
            printf("The sum of %d values you entered is %.2lf\n\n", n, sum);
            break;

        case 2:
            printf("\n\nHow many numbers you are going to subtract= ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\n\nEnter the %d value= ", i + 1);
                scanf("%lf", &v[i]);
            };
            sub = 0;
            for (i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    sub = v[i] - sub;
                }
                else
                {
                    sub = sub - v[i];
                }
            }
                printf("The subtraction of %d values you entered is %.2lf\n\n", n, sub);
                break;

            case 3:
                printf("\n\nHow many numbers you are going to multiply= ");
                scanf("%d", &n);
                for (i = 0; i < n; i++)
                {
                    printf("\n\nEnter the %d value= ", i + 1);
                    scanf("%lf", &v[i]);
                };
                multi = 1;
                for (i = 0; i < n; i++)
                {
                    multi = multi * v[i];
                };
                printf("The product of %d values you entered is %.2lf\n\n", n, multi);
                break;

            case 4:
                printf("\nEnter the dividend= ");
                scanf("%lf", &p[0]);
                printf("\nEnter the divisor= ");
                scanf("%lf", &p[1]);

                double div;
                div = p[0] / p[1];

                printf("The answer is %.2lf\n\n", div);
                break;

            default:
                printf("Choose correctly my dear!\n");
            }
        }
        return 0;
    }