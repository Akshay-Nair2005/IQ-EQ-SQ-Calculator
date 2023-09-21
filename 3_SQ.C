#include <stdio.h>
#include <conio.h>
#include <string.h>

int sqquestions();
int sqanswer(int i);
int sqcalculator(int i);
void main()
{
	clrscr();
	printf("\n###############################################################################\n");
	sqquestions();
	printf("\n###############################################################################\n");
	getch();
}

int sqquestions()
{
	//Creating the varaible for the question, option and answer.
	int random, i, j, count=0, age;

	//Adding the input in the varible.
	char question[][300] = {"01. I love to socialize.",
			    		"02. I can be comfortable with all types of people - young and old, rich and poor.",
			    		"03. I always mingle at parties.",
			    		"04. I can be strongly affected by someone smiling or frowning at me.",
			    		"05. I usually take the initiative to introduce myself to strangers.",
			    		"06. I'm generally concerned about the impression I'm making on others.",
			    		"07. I can easily adjust to being in just about any social situation.",
			    		"08. When I'm with a group of friends, I am often the spokesperson for the group.",
			    		"09. At parties, I can immediately tell when someone is interested in me.",
			    		"10. I can easily tell a person's character by watching them interact with others.",};
	char options[][200] = {"A. Exactly Like me.", 
				     "B. Its very close like me.", 
				     "C. Sometimes i'm like that.", 
				     "D. Very rarly i'm like that.", 
				     "E. Not at all like me.",};

	//Printing the question.
	for(i = 0; i < 10; i++)
	{
		printf("******************************************************************************\n");
		printf("%s\n", question[i]);
		printf("******************************************************************************\n");

		//Printing the options.
		for(j = 0; j < 5; j++)
		{
			printf("%s\n", options[j]);
		}

		//Getting the input from the userand count the points.
		count = count + sqanswer(i);
	}
	
	//Here we are getting the age of the user to calculate the SQ.
	printf("What is your age? ");
	scanf("%d",&age);
	sqcalculator((count*10)/age);
	return 0;
}

//Getting the input and giving it the values according the answer.
int sqanswer(int i)
{
	char ans;
	answer:
		printf("Give your Guess: ");
		scanf("%c",&ans);
		scanf("%c");

		//To avoid the problem with lowercase.
		ans = toupper(ans);

		//To avoid the giving of wrong input.
		switch(ans)
		{
			case 'A': return 5;
			case 'B': return 4;
			case 'C': return 3;
			case 'D': return 2;
			case 'E': return 1;

			//Let the user get change the input.
			default:
				printf("\nThe given Input is Invaild.\n");
				goto answer;
		}
	return 0;
}

//This fumction calculates the SQ.
int sqcalculator(int i)
{
	printf("\n===============================================================================\n");
	if (20 <= i && i <= 30)
		printf("\nYour SQ is above 100.\nYou have an High Level of Social Intelligence.\n");
	else if (10 <= i && i < 20)
		printf("\nYour SQ is inbetween 85 and 100.\nYou have an Average Level of Social Intelligence.\n");
	else
		printf("\nYour Sq is below 85.\nYou have an Below Average Level of Social Intelligence.\n");
	printf("\n===============================================================================\n");
	return 0;
}