#include <stdio.h>

int main(){

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("CALCULATOR\n");
    
    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Select Operation any one (+ - * /):\n");
    scanf(" %c", &operator); // clear new line character

    printf("Enter number 2 : ");
    scanf("%lf", &num2);

    // printf("%.1lf %c %.1lf", num1, operator, num2);

    if(operator == '+'){
        printf("The answer is = %.2f", num1 + num2 );
    }
    else if(operator == '-'){
        printf("The answer is = %.2f", num1 - num2 );
    }
    else if(operator == '*'){

        printf("The answer is = %.2f", num1 * num2 );
    }
    else if(operator == '/'){
        printf("The answer is = %.2f", num1 / num2 );
    }
    
    
    // it can also be done this way 

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break; 
    }

    printf("\n Result: %lf", result);




    
    
    
    
    return 0;
}