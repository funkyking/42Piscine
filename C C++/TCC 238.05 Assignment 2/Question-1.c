//Defining States with initial rates below 20,000 litres
#include <stdio.h>  
#define Penang 0.22
#define Selangor 0.57
#define Sarawak 0.48
#define Johor 0.80
#define Kelantan 0.45
#define Kedah 0.50
#define Perlis 0.40
#define Perak 0.30
#define Melaka 0.60
#define NegeriSembilan 0.55
#define Sabah 0.30
#define Pahang 0.37
#define KualaLumpur 0.57
#define Terengganu 0.42

// Selection of different State ( function )
float user(int ch)  
{
    if (ch == 1)
    return Penang;
    else if (ch == 2)
    return Selangor;
    else if (ch == 3)
    return Sarawak;
    else if (ch == 4)
    return Johor;
    else if (ch == 5)
    return Kelantan;
    else if (ch == 6)
    return Kedah;
    else if (ch == 7)
    return Perlis;
    else if (ch == 8)
    return Perak;
    else if (ch == 9)
    return Melaka;
    else if (ch == 10)
    return NegeriSembilan;
    else if (ch == 11)
    return Sabah;
    else if (ch == 12)
    return Pahang;
    else if (ch == 13)
    return KualaLumpur;
    else if (ch == 14)
    return Terengganu;
}

// Initiation of Calculation Program
int main() 
{
    int i,choice;
    float w,cost,state;
    char user_input[14][20] = {"1-Penang","2-Selangor","3-Sarawak","4-Johor","5-Kelantan","6-Kedah"
    ,"7-Perlis","8-Perak","9-Melaka","10-Negeri Sembilan","11-Sabah","12-Pahang","13-Kuala Lumpur","14-Terengganu"};
    printf("Prepared by Name and Id : Paul Anand - 033200014 \n");
    printf("Class : 3SPG1 \n");
    printf("This program calculates the monthly water bill for you \n");
    
    // User input for state selection
    for(i=0;i<14;i++) 
    {
      printf("%s\n",user_input[i]);
     }
    
          printf("For which state you want to calculate the water cost: ");
          scanf("%i",&choice);
          state = user(choice);
    
    // User input on Cost calculation
    while (1)
    {
      printf("Please key in the water consuption for this month (in m^3): ");
      scanf("%f",&w);
      if (w<0)
      printf("Wrong! Cant be negative value. Key in again\n");
      else
      break;
     }
          //Initiate Calculation

          //First 20,000 Litres
          if (w<=20000)
          {
             cost = w * state + 2.50;
             printf("You need to pay RM %0.2f for this month \n",cost);
             printf("Thank for using my program\n");
          }

               //Above 20,000 to 40,000 litres
               else if (20000 < w <40000)
               {
                  cost = (w - 20000) * (state + 0.24) + 2.50 + (20000 * state) ;
                  printf("You need to pay RM %0.2f for this month \n",cost);
                  printf("Thank for using my program\n");
               }
     
                    //Above 40,000 to 60,000 litres
                    else if (40000 < w < 60000)
                    {
                       cost = (w - 20000) * (state + 0.46) + 2.50 + (20000 * state) ;
                       printf("You need to pay RM %0.2f for this month \n",cost);
                       printf("Thank for using my program\n");
                    }
     
                         //Above 60,000 to 200,000 litres
                         else if (60000 < w < 200000)
                         {
                            cost = (w - 20000) * (state + 0.95) + 2.50 + (20000 * state);
                            printf("You need to pay RM %0.2f for this month \n",cost);
                            printf("Thank for using my program\n");
                         }

                              //Above 200,000 Litres
                              else if (w > 200000)
                              {
                                 cost = (w - 20000) * (state + 1.08) + 2.50 + (20000 * state);
                                 printf("You need to pay RM %0.2f for this month \n",cost);
                                 printf("Thank for using my program\n");
                              }
     return 0;

}
