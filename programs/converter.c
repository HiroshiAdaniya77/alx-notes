#include <stdio.h>
int main()
{
	char temp; 
	char cel = 'C';
	char fah = 'F';
	double degrees;

	printf("Please let me know if you would like to convert from °%c or °%c(enter it in a capital letter)?: \n", cel, fah);
	scanf("%c", &temp);
	printf("please enter the temp in %c\n", temp);
	scanf("%lf", &degrees);

	if(temp == cel){
		printf("%.1lf°f\n", (degrees*9/5)+32);
	}else{
		if(temp == fah){
		printf("%.1lf°c\n", (degrees-32)*5/9);
		}
	}
	return (0);
}
