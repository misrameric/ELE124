#include <stdio.h>
#include <math.h>

void computeHomeValue(int popularity, int size){
	
	printf("please enter popularity: \n");
	scanf ("%d", &popularity);
	printf ("please enter size: \n");
	scanf ("%d", &size);	


	int HomeValue; 	
	HomeValue = (pow(popularity,3)+pow(size,2))*10000;
	printf("HomeValue is: %d", HomeValue);	
}

int main(){
	int popularity;
	int size;
	
 	computeHomeValue(popularity, size);
	
	return (0);
}
