#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>

void sort(char[],int,int);

//Main Program
int main()
{
  int i,j,k,l,len,st;
  char orgSt[100],outputSt[100],sortSt[100];
  printf("Prepared by Paul Anand - 033200014\n");
  printf("Class 3SPG1\n");
  printf("This program will take in a sentence from you and invert the letters in each individual words.\n");
  printf("Type in a sentence with no more than 100 characters including space:\n");
  gets(orgSt);
  len=strlen(orgSt);
  printf("String length is %d\n",len); //Displays the length of the User's input or character count ( string )
  printf("The original sentence is "); //Unsorted User input
  puts(orgSt);
  j=0;k=0;l=0;

//Modifying the Strings
 for(i=0;orgSt[i]!='\0';i++)

    {
     if(isalpha(orgSt[i]))

        {
         if(i==len-1)

            {
             k=j;
             
    for(l=i;l>=j;l--)
                {
                 outputSt[k++]=orgSt[l];
                }
            }
     else
     continue;
        }    
         else
        {
         k=j;
         for(l=i-1;l>=j;l--)
            {
             outputSt[k++]=orgSt[l];
            }
         outputSt[i]=orgSt[i];
         j=i+1;
        }
    }

  outputSt[k]='\0';
  printf("The modified sentence is ");
  puts(outputSt);

//Sorting Array lineup
 void sort(char arr[],int st,int end)
    {
     char temp;
     int i, j;
     for (i = st; i < end; i++)
     for (j = st; j < end-1; j++)
        {
         if (arr[j] > arr[j+1])

            {
             temp= arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
            }
        }
    }

//Sorting the strings
//It sorts the Characters based on their value and type,  then it sorts the values in Acsending
 k=0;
 st=k;
 for(i=0;i<len;i++)
    {
     if(islower(orgSt[i]))
     sortSt[k++]=orgSt[i];
    }
        sort(sortSt,st,k);
        st=k;
        for(i=0;i<len;i++)
        {
         if(isupper(orgSt[i]))
         sortSt[k++]=orgSt[i];
        } 
            sort(sortSt,st,k);
            st=k;
            for(i=0;i<len;i++)
            {
             if(isdigit(orgSt[i]))
             sortSt[k++]=orgSt[i];
            }
                sort(sortSt,st,k);
                st=k;
                for(i=0;i<len;i++)
                {
                 if(!isalnum(orgSt[i]))
                 sortSt[k++]=orgSt[i];
                }
                    sort(sortSt,st,k);
                    st=k;
                    sortSt[k]='\0';

    printf("The sorted sentence is ");
    puts(sortSt);
    printf("\nPress any key to continue...");
    getch();

  return 0;
}



