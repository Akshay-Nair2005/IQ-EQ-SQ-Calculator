#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>

float questions();
int check_ans(int i);
float calculate_iq(int i);

void main()
{
	float score;
	char name[100];
	clrscr();
	printf("	CALCULATE YOUR INTELLIGENCE QUOTIENT\n");
	printf("-------------------------------------------------\n\n");
	printf("Enter your name: ");
	gets(name);
	printf("-------------------------------------------------\n\n");
	printf("Let's get started!");
	sleep(3);
	score = questions();
	printf("\n\n%s, your IQ according to your age is %.2f. \n",name, score);
	getch();
}


float questions()
{
	//Creating the varaible for the question, option and answer.
	int i, j, count=0;
	//float result=0;

	//Adding the input in the varible.
	char question[][300] = {"1. Flow : River :: Stagnant : ?",
				    "2. Look at this series: 7, 10, 8, 11, 9, 12, ... What number should come next?",
				    "3. Statements:\n   All green are blue.\n   All blue are white.\nConclusions:\n   1. Some blue are green.\n   2. Some white are green.\n   3. Some green are not white.\n   4. All white are blue.",
				    "4. 123 : 13^2 :: 235 : ?",
				    "5. Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?",
				    "6. Statements:\n   All the locks are keys.\n   All the keys are bats.\n   Some watches are bats.\nConclusions:\n   1. Some bats are locks.\n   2. Some watches are keys.\n   3. All the keys are locks.",
				    "7. Glove : Hand",
				    "8. Look at this series: V, VIII, XI, XIV, __, XX, ... What number should fill the blank?",
				    "9. Statements:\n   No cows is cats.\n   All the dogs are cats.\nConclusions:\n   1. No cow is dog.\n   2. No dog is cat.\n   3. Some cats are dogs.\n   4. All the cows are dogs.",
				    "10. Ophthalmia' is related to 'Eye' in the same way as 'Rickets' is related to:",
				    "11. Look at this series: VI, 10, V, 11, __, 12, III, ... What number should fill the blank?",
				    "12. Statements:\n   Some envelops are gums.\n   Some gums are seals. \n   Some seals are adhesives.\n	Conclusions:\n   1. Some envelopes are seals.\n   2. Some gums are adhesives.\n   3. Some adhesives are seals.\n   4. Some adhesives are gums."};
	
	char options[][300] = {"A. Rain", "B. Stream", "C. Canal", "D. Pool",
				     "A. 7", "B. 10", "C. 12", "D. 13",
				     "A. Only (1) and (2)","B. Only (1) and (3)","C. Only (1) and (4)","D. Only (2) and (4)",
				     "A. 23^2", "B. 35^2", "C. 25^3", "D. 25^2",
				     "A. 12", "B. 14", "C. 27", "D. 53",
				     "A. Only (1) and (2)","B. Only (1)","C. Only (2)","D. Only (1) and (3)",
				     "A. Socks : Feet","B. Tie : Shirt","C. Neck : Collar","D. Coat : Pocket",
				     "A. IX", "B. XXIII", "C. XV", "D. XVII",
				     "A. Only (2) and (4)","B. Only (1) and (3)","C. Only (3) and (4)","D. Only (2) and (3)",
				     "A. Kidney", "B. Nose", "C. Heart", "D. Bone",
				     "A. 2","B. IV","C. IX","D. 14",
				     "A. Only (3)","B. Only (1)","C. Only (2)","D. Only (4)", };

	

	//Printing the question.
	for(i = 0; i < 12; i++)
	{
		sleep(2);
		clrscr();
		printf("\n%s\n", question[i]);
		printf("\n------------------------------------------------------------\n\n");

		//Printing the options.
		for(j = (i * 4); j <(i * 4) + 4; j++)
		{
			printf("%s\n", options[j]);
		}
		printf("\n\n------------------------------------------------------------\n");

		//Getting the input from the userand count the points.
		count += check_ans(i);
	}
	//result = calculate_iq(count);
	//return result;
	return calculate_iq(count);
}

//Getting the input and check if the input is right or wrong.
int check_ans(int i)
{

	char answer[20] = {'D', 'B', 'A', 'C', 'B', 'B', 'A', 'D', 'D', 'C', 'B', 'A'};
	char ans;

	while (1){
		printf("\nYour Guess: ");
		scanf("%c",&ans);
		scanf("%c");

		//To avoid the problem with lowercase.
    		ans = toupper(ans);

		//To avoid the giving of wrong input.
		if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D')
		{
			if (ans == answer[i])
				return 4;
			else
				return 0;
		}

		//Let the user get change the input.
		else
		{
			printf("The given input is Invalid.\n");
		}
	}
}

//This function calculates the iq of the user with the age .
float calculate_iq(int i)
{
	float age;
	age:
		sleep(1);
		clrscr();
		printf("Enter your Age: ");
		scanf("%f",&age);

		if (age <= 5 || age >= 110)
		{
			printf("The entered age is invalid.\n Please enter Again.\n");
			goto age;
		}

	return (i/age)*100.0;
}