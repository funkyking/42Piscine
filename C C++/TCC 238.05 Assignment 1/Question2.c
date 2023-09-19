#include <stdio.h>
#include <conio.h>

int main(void)
{
    int weight;
    printf("Enter weight: ");
    scanf("%d", &weight);   //records the user input

if (weight>=45)
    {
        printf("It's probably not an orange"); //prints the value if the weight is ≥45
    }

    else if (weight<4)
    {
        printf("It belongs in the trash");  //prints the value if the weight is <4
    }
    else if (weight>30)
    {
        printf("It's Premium"); //prints the value if the weight is >30
    }

    else if (weight>20)
    {
        printf("It's Juicy"); //prints the value if the weight is >20
    }

    else if (weight>15)
    {
        printf("It's a Snack"); //prints the value if the weight is >15
    }

    else if (weight<=15)
    {
        printf("It's for Cooking"); //prints the value if the weight is ≤15
    }

     {
    printf("\n<>-----okay byee----<>\n");
    return 0;
    }

getch();
}     

