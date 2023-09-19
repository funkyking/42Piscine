#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

bool isOperand(char c) { return (c >= '0' && c <= '9'); }
int value(char c) { return (c - '0'); }
int evaluate(char *exp)

{
 if (*exp == '\0') return -1;
 int res = value(exp[0]);
 for (int i = 1; exp[i]; i += 2)

   {
     char opr = exp[i], opd = exp[i+1];
     if (!isOperand(opd)) return -1; //Program Request repeat if the value is below 0
     if (opr == '+') res += value(opd); //Addition
     else if (opr == '-') res -= value(opd); //Subtraction
     else if (opr == '*') res *= value(opd); //Multiplication
     else if (opr == '/') res /= value(opd); //Division
     else return -1;
   }
  return res;
}

//Main Program
int main()
{
 char expr1[20];
 char inp='y';
 while(inp=='y') //User Confirmation to repeat program

   {
     char expr1[20];
     printf("Enter a simple mathematical operation: ");
     scanf(" %s", expr1);
     int res = evaluate(expr1);
     if(res != -1)

      {
         printf("The result of %s is %d\n",expr1,res);
      }

     printf("Do you want to try again? (y/n) "); //Request the user if then intend to repeat the program
     scanf(" %c",&inp); //Reads the input
     expr1[0] = '\0';
     
   }

   printf("Thanks for using my program.\n");
  return 0;
}