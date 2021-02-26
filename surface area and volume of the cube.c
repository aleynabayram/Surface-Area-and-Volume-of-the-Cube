/*The code calculates the surface area and volume of the cube */

#include <stdio.h>
	int main () {

	float length;
	float area;
	float volume;

	printf("Please enter the length of cube:");
	scanf("%f" , &length);

	area= 6*length*length;
	volume= length*length*length;
	
	printf("The surface area of cube is %.2f\n" ,area);
	printf("The volume of cube is %.2f" ,volume);
	
	return 0;
}
