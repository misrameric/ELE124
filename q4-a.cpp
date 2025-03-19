#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size);

int main(void){
	int popularity;
	int size;
	int HomeValue;
	
	printf("enter popularity:\n");
	scanf ("%d", &popularity);
	printf ("enter size: \n");
	scanf ("%d", &size);
	
	HomeValue = computeHomeValue(popularity,size);
	printf("HomeValue is: %d", HomeValue);
	return (0);
	
}

int computeHomeValue(int popularity, int size){
	int HomeValue;
	HomeValue= (pow(popularity,3)+pow(size,2))*10000;
	return HomeValue;
}
