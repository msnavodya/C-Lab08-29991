#include<stdio.h>
/*void calculate()
{
int n1,n2,sum,diff;
printf("Enter two numbers");
scanf("%d %d",&n1,&n2);
sum=n1+n2;
diff=n1-n2;
printf("The sum is %d \n",sum);
printf ("The different is %d \n",diff);
}
int main()
{
calculate ();
}



void calculate(int n1,int n2)
{
int sum,diff;

sum=n1+n2;
diff=n1-n2;
printf("The sum is %d \n",sum);
printf ("The different is %d \n",diff);
}
int main()
{
    int x,y;
     printf("Enter two numbers");
     scanf("%d %d",&x,&y);
    calculate ();

}


int calculate (int n1,int n2)
{


int pro;
pro= n1*n2;
return pro;

}
int main()
{
    int x,y;
    printf ("Enter two numbers");
    scanf("%d %d",&x,&y);
    printf("The product is %d\n",calculate (x,y));
}



#include <stdio.h>

int calculateQuotient(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 0; // Returning 0 as an indication of error
    }

    int quotient = dividend / divisor;
    return quotient;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = calculateQuotient(num1, num2);
    if (result != 0) {
        printf("The quotient of %d divided by %d is: %d\n", num1, num2, result);
    }

    return 0;
}
*/

#include <stdio.h>

// Function to read two numbers and display their sum
void displaySum() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
}

int main() {
    int num_of_times;

    printf("How many times do you want to calculate the sum? ");
    scanf("%d", &num_of_times);

    for (int i = 0; i < num_of_times; i++) {
        displaySum();
    }

    return 0;



    #include <stdio.h>

// Function to calculate the product of an integer and a float value
double calculateProduct(int num1, float num2) {
    double product = (double)num1 * num2;
    return product;
}

int main() {
    int integerNumber;
    float floatValue;

    printf("Enter an integer number: ");
    scanf("%d", &integerNumber);

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    double result = calculateProduct(integerNumber, floatValue);
    printf("The product of %d and %.2f is: %.2lf\n", integerNumber, floatValue, result);

    return 0;
}
