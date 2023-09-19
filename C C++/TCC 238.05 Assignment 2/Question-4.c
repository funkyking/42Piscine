#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double evaluate (char []);
int precedence(char);
double calculate(char , double , double );
char checknumber(char);
char ss;

int main(void)
{
 char expression[100];
 double result;
 char inp ='y';
 
    {
     do {
         char expression[100];
         printf("Enter a simple mathematical operation: "); 
         scanf("%[^\n]", expression);  
         result = evaluate(expression);
            {
             printf("Result = %.2f\n", result);
            }
         printf ("Do you want to try again? (y/n) ");
         getchar();
         scanf ("%c", &inp);
         expression[0] = '\0';
        }
     while(inp=='y');
    }
  printf("Thanks for using my program.\n");
 return 0;
}

double evaluate(char expr[])
{
    double numbers[5]; int nsi = 0;
    char operators[5]; int osi = 0;
    char numbuf[16]; int nbi = 0;
    char ch; int  i = 0;

    while ((ch = expr[i]) != 0) {
        if (checknumber(ch)) 
        {
            numbuf[nbi++] = ch;
            if (!checknumber(expr[i + 1])) 
            {
                numbuf[nbi] = 0; nbi = 0;
                sscanf(numbuf, "%lf", &numbers[nsi++]); 
            }
        }
        else
        {
            while ((osi > 0) && (precedence(ch) <= precedence(operators[osi - 1])))
            {
                numbers[nsi - 2] = calculate(operators[osi - 1], numbers[nsi - 2], numbers[nsi - 1]);
                osi--; nsi--;
            }
            operators[osi++] = ch;          
        }
        i++;
    }
    while (osi > 0) {
        numbers[nsi - 2] = calculate(operators[osi - 1], numbers[nsi - 2], numbers[nsi - 1]);
        osi--; nsi--;
    }
    return numbers[0];
}

char checknumber(char ch) 
{
    return '0' <= ch && ch <= '9' || ch == '.';
}

int precedence(char ch)
{
    int precedence;
    switch (ch) 
    {
    case '+':
    case '-':
        precedence = 0;
        break;
    case '*':
    case '/':
        precedence = 1;
        break;
    case '^':
        precedence = 2;
    }
    return precedence;
}

double calculate(char moperator, double num1, double num2) 
{
    double result;
    switch (moperator)
    {
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
    case '^':
        result = pow(num1, num2);
        break;
    default:
        printf("Invalid Operator\n");
        exit(-1);
    }
    return result;
}