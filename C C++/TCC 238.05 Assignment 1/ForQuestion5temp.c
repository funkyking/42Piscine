#include<stdio.h>
#define NUMBER_LEN 11

int main()
{

char phone[NUMBER_LEN];

char name[20];

long ID;

printf("enter phone number: ");
gets(phone);


printf("Enter Name: ");
gets(name);

printf("Enter ID: ");
scanf("%ld",&ID);



printf("\nMy Name Start With [%c]",name[0]);
printf("\nMy ID is [%ld]",ID);
printf("\nMy Mobile is %s",phone);

return 0;
}