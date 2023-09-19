#include <stdio.h> 
#include <math.h>
#include <conio.h>
int main()

{                     //Initializing the Variables
    float radius;
    float area;
    float angle;
    float arc_length;
    float perimeter;
    float PI =3.14;

    printf("Enter the radius of pie slice: ");
    scanf("%f",&radius); //records the radius input from the user

    printf("Enter a angle of pie slice(degree): ");
    scanf("%f",&angle);//records the angle input from the user

    area = (angle/360)*PI*radius*radius;//Calculates the area of pie slice

    arc_length =(angle/360)*2*PI*radius;//Calculates the length of pie slice arc

    perimeter = arc_length + 2*radius;//Calculates the perimeter of the pie slice

    printf("\nThe Area of Pie slice is= %f cm^2",area);//Displays the Calculated area of pie slice

    printf("\nThe Perimeter of Pie slice is= %f cm",perimeter);//Displays the Calculated perimeter of the pie slice

    printf("\nThe Arc Length Pie slice is= %f cm",arc_length);//Displays the Calculated length of pie slice arc

 

 {
  printf("\nPress any key to continue\n");
  getch();
  
  return 0;
 }

}