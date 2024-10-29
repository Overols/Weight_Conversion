/* standard library */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int weight;
	float convertedweight1;
	float convertedweight2;
	char unit[100];
	
	printf("Please enter the weight: %d\n", weight);
	scanf("%d", &weight);
	
	scanf("%s", &unit);
	printf("Please enter the weight in (kg or lbs): %s\n", unit);
	
	strlwr(unit);
	
	if(strcmp(unit, "kg")==0){
		convertedweight1 = weight * 2.2;
		printf("The weight in lbs is %f", convertedweight1);
	}
	
	else if(strcmp(unit, "lbs")==0){
		convertedweight2 = weight * 0.4;
		printf("The weight in kg is %.1f", convertedweight2);
	}
	return 0;
}