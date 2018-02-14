

int main()
{
    float num1, num2;
    char operation;
    while (1) {
        scanf("%f%c%f", &num1, &operation, &num2);
        if (operation == '+')//this is adding function
            printf("%f\n", num1+num2);
        if (operation == '-')//subtracting function
            printf("%f\n", num1-num2);
        if (operation == '*')//multiplying function
            printf("%f\n", num1*num2);
        if (operation == '/')//dividing function
            printf("%f\n", num1/num2);
    }
    return 0;
}
