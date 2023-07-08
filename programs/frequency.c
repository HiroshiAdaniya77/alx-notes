#include <stdio.h>
//finding the frequency length of a word
int main()
{
	int i = 0;
	int l = 0;
	int nbwords = 0;
	int length[10];
	char word[20];
	
	for(i=0;i<10;i++)
	{
		length[i]=0;
	}

	printf("please enter the number of words being assessed:\n");
	scanf("%d", &nbwords);
	
	for(i=0;i<nbwords;i++)
	{
		scanf("%s", word);
		l = 0;
		while(word[l] != '\0')
		{
			l++;
		}
		length[l] = length[l] +1;
		printf("the word \"%s\" has %d characters\n", word, l);
	}

	for(i=0;i<10;i++)
	{
		printf("there are %d with %d characters\n", length[i], i);
	}
	return (0);
}
