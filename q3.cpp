#include <stdio.h>
#include <math.h>

int
main(void)
{
	int popularity;
	int size;
	int homeValue;
	
	printf ("please enter popularity> \n");  //get the popularity
	scanf ("%d", &popularity);
	
	printf ("please enter size>  \n");  // get the size
	scanf ("%d", &size);
	
	homeValue = (pow(popularity,3)+pow(size,2))*10000;  // compute homeValue
	
	printf("homeValue is: %d", homeValue);
	
	
	
	return (0);	
}
