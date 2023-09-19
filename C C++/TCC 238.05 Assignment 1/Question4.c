#include<stdio.h>
#include<conio.h>

main()

{

char name[20];

long ID;

char phone[16];

printf("Enter Name: "); //user data input
gets(name); //stores the input

printf("Enter ID: "); 
scanf("%ld",&ID); 

printf("Enter Mobile No: "); 
scanf("%s",&phone); 



printf("\nMy Name Start With [%c]",name[0]); //displays the initial user input

printf("\nMy ID is [%ld]",ID);

printf("\nYour Mobile Number is: %s",phone);


getch(); //pauses the Output Console until a key is pressed

}

