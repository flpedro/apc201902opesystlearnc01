#include <stdio.h>  // Needed to perform IO operations

int main(){
	double radius, circumference, area;
	double pi = 3.1415;

 printf("Enter the radius: ");  // Prompting message
   scanf("%lf", &radius);         // Read input into variable radius

   // Compute area and circumference
   area = radius * radius * pi;
   circumference = 2.0 * radius * pi;

   // Print the results
   printf("The radius is %lf.\n", radius);
   printf("The area is %lf.\n", area);
   printf("The circumference is %lf.\n", circumference);

   return 0;
}
