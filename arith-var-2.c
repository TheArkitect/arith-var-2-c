#include <stdio.h>

int main()
{
	/*integer value declaration*/
	int fahr;

	/*the for loop is similar to the while where if the condition 
	is met then the execution of the statement within will occur.
	fahr = 0 - the initialization 
	fahr <= 300 is the test condition that controls the loop
	fahr = fahr + 20 is the increment step */
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		/*%3d means having the width of 3 digits as an integer
		%6.1f means having the width of 6 and 1 digit after the 
		decimal as a floating point*/
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
	}
}
