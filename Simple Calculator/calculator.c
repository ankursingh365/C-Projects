#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);
void print_menu();

int main()
{
    int choice;
    double first, second, result;
    while (1)
    {
        print_menu();
        scanf("%d", &choice);
        if (choice == 7)
        {
            break;
        }

        if (choice < 1 || choice > 7)
        {
            fprintf(stderr, "Invalid Menu Choice.");
            continue;
        }

        printf("\nEnter the first number: ");
        scanf("%lf", &first);
        printf("Enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1:
            result = first + second;
            break;

        case 2:
            result = first - second;
            break;

        case 3:
            result = first * second;
            break;

        case 4:
            result = division(first, second);
            break;

        case 5:
            result = modulus(first, second);
            break;

        case 6:
            result = pow(first, second);
            break;
        }
        if (!isnan(result))
        {
            printf("\nResult of the Operation is: %.2f", result);
        }
    }
    return 0;
}

double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Division");
        return NAN;
    }
    else
    {
        return a / b;
    }
}

double modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus");
        return NAN;
    }
    else
    {
        return a % b;
    }
}

void print_menu()
{
    printf("\n\n-------------------------------------");
    printf("\nWelcome to Simple Calculator\n");
    printf("Choose one of the following options\n");
    printf("1. Addition\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Enter Your Choice: ");
}