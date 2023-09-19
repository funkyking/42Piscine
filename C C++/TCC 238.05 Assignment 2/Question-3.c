#include <stdio.h>
#include <conio.h>
#define MAX 20

void bubblesort(int a[],int n); //Comparison-based Algorithm used to swap elements to fit in order
int search(int a[],int x);
int a[MAX],b[MAX],n;
char ch;

//linear Search
int search(int a[],int x)
{
  int i;
  for (i = 1; i <= n; i++)  
   {
    if (a[i] == x)  
      {
       return i;
       break;
      }
   }
  if (i > n)
 return 0;
}

//Sorting algorithm
void bubblesort(int a[],int n)

   {
    int i,j,t;
    for(i=0;i<n;i++)
         {
          for(j=0;j<n-i;j++)
               {
                if(a[j]>a[j+1])
                     {
                      t=a[j];
                      a[j]=a[j+1];
                      a[j+1]=t;
                     }
               }
         } 
   }

//Main Program
int main(void)
{
 printf("Prepared by Name and Id : Paul Anand - 033200014 \n");
 printf("Class : 3SPG1 \n");
 printf("This program takes in a set of numbers and performs sorting and indexing.");
do {
    printf("\n Please enter how many numbers do you want to sort (max.20): ");
    scanf("%d",&n);
    
      for(int i=1;i<=n;i++)
      {
       printf("Key in number #%d: ",i);
       scanf("%d",&a[i]);
      }

         for(int i=1;i<=n;i++)
         {
          b[i]=a[i];
         }
            //Displays the initial number order
            printf("\nThe original order of numbers are: ");

            for(int i=1;i<=n;i++)
            {
             printf("%d ",a[i]);
            }
               //Displays Sorted Numbers in order
               bubblesort(a,n);
               printf("\nThe sorted numbers are: ");
               for(int i=1;i<=n;i++)

               {
                printf("%d ",a[i]);
               }

                  for(int j=1;j<=n;j++)
                  {
                   printf("\nThe index for number #%d (%d) is %d",j,b[j],search(a,b[j]));
                  }

    printf("\nDo you want to repeat the program?(y/n): "); //Re-use the program
    getchar(); 
    scanf("%c",&ch); 
                  
   }while(ch!='n');

 printf("\nThanks for using my program.");
 printf("\nPress any key to continue...");
 getch();
}

