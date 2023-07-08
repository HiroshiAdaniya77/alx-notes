#include <stdio.h>
int main(){

	char name[50];
	char answer[5];
	//char name1[50] = "hiroshi";
	int i = 0;

	printf("Welcome to the Adaniya's secret WebTerminal! Could you please tell me your name?: ");
	scanf("%s", name);
	//if(name[i] == name1[i]) this if statment actually works, but user input has to be in all small caps because of char array name1 is in small caps.
	//	printf("Hello there mr %s. this syntax seems to work", name);
	
	while(name[i] != '\0')
		i++;
	if(i == 7)
	{	
		if(name[0] == 'h' || name[0] == 'H')
		{
			printf("\nHi %s. It's a pleasure to meet you. My data tells me that you are the oldest son of Tsuneo Adaniya, is this correct?: ", name);
		}
		else if(name[0] == 'm' || name[0] == 'M')
		{
			printf("\nHi %s. It's a pleasure to meet you. My data tells me that you are the oldest Child of the Adaniya family?, is this correct?: ", name);
		}
	}
	else if(i == 5)
	{
		printf("\nHi %s. It's a pleasure to meet you. My data tells me that you are the oldest daughter of Tsuneo Adaniya, is this correct?: ", name);			}	
	else if(i == 4)
	{
		printf("\nHi %s. It's a pleasure to meet you. My data tells me that you are the second oldest son of Tsuneo Adaniya, is this correct?: ", name);
	}
	else if(i == 6)
	{
					
		printf("\nHi %s. It's a pleasure to meet you. My data tells me that you are the youngest son of Tsuneo Adaniya, is this correct?: ", name);
	}
	else if(i == 8)
	{
		printf("\nHi %s. It's a pleasure to meet you. My data tells me that you are the youngest boy and child of the Adaniya Family is this correct?: ", name);
	}
	scanf("%s", answer);
	printf("\nThat's exactly what i thought! Now, let me see if i have your age on my system too...");
	if(i == 7)
	{	
		if(name[0] == 'h' || name[0] == 'H')
		{
			printf("\nAh! yes. Here it is %s, My data tells me you are 26 years old!", name);
		}	
		else if(name[0] == 'm' || name[0] == 'M')
		{	
			printf("\nAh! yes. Here it is %s. my Data tells me you are 33 years old!", name);
		}
	}
	else if(i == 5)
	{
		printf("\nAh! yes. Here it is %s, my data tells me you are 28 years old!", name);
	}
	else if(i == 4)
	{					
		printf("\nAh! yes. Here it is %s, my data tells me you are 23 years old!", name);
	}
	else if(i == 6)
	{
		printf("\nAh! yes. Here it is %s, my data tells me you are 21 years old!", name);
	}
	else if(i == 8)
	{
		printf("\nAh! yes. Here it is %s, my data tells me you are 11 years old!", name);
	}
	printf("\nIs this correct?: ");
	scanf("%s", answer);
	printf("Of course i was right! I am just so good at what i do\n");

	printf("Lets try and get some more information for you... lets talk about your star sign shall we?");

	return (0);
}
