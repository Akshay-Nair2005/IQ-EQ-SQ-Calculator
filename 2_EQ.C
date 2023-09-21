#include <stdio.h>
#include <conio.h>
#include <string.h>

int eqquestions();
int eqanswer(int i);
void eqcalculator(int i);
void main()
{
	clrscr();
    	printf("\n###############################################################################\n");
    	eqquestions();
    	printf("\n###############################################################################\n");
    	getch();
}

int eqquestions()
{
    	//Creating the varaible for the question, option and answer.
    	int random, i, j, count=0;

    	//Adding the input in the varible.
    	char question[][300] = {"01. Your coworker has an annoying habit that seems to get worse everyday, What you will do?",
					"02. What do you do in a lots of pressure?",
			    		"03. What you do when taking important decision?",
			    		"04. Imagine you want to sell a product by calling, even after calling more then 10 people you find you success, now you are started to feel discouraged, what you will do?",
			    		"05. What you do in a very heated argument?",
			    		"06. If you are asked to do somthing that you do not like, what will you do?",
			    		"07. What do you do if two of your friends are arguing?",
			    		"08. How do you feel when someone criticizes you?",
			    		"09. Do you try to see the situaton from the perspective of other person?",
			    		"10. If a person breaks your trust, how do you see him?",};
	char options[][200] = {"A. Tell him what's bothering you.", "B. Suffer in silence.", "C. Complain to boss.", "D. Talk about him behind his back.",
			           "A. Stay calm.", "B. Can't find anything to be done.", "C. Get distracted.", "D. Get anxious.",
			           "A. Think thoughtfully then choose.", "B. Choose randomly.", "C. Dont think that much.", "D. Lets someone else do your decision.",
			           "A. Find your mistake and change it.", "B. Stop your work for today.", "C. Change your whole concept and try do something different.", "D. Give your work to someone else.",
			           "A. Hear that persons point and try to explain your's.", "B. Stop responding. or Just try to prove yourself without listening to other.", "C. Apologize and end the argument.", "D. Start Insulting",
			           "A. Let that person know that you dont like that work and then do with your 100%.", "B. Just try to do that work.", "C. Just try to do the work whole heartedly. or Say no.", "D. Try to avoid that work.",
			           "A. Try to solve the problem and help them calm.", "B. Avoid both.", "C. Just be there and try to clam them and let them solve.", "D. Pick a side and abuse other.",
			           "A. Listen them and try to improve.", "B. Get hurt and overthhink about it.", "C. Ignore criticism.", "D. Comment back with bad language.",
			           "A. Always.", "B. In very specific moments only.", "C. Sometimes.", "D. Never.",
			           "A. After apology give them one more chance.", "B. Will avoid them and let them think its all fine.", "C. Never talk to him/her.", "D. Just dont care.",};
    
	//Printing the question.
	for(i = 0; i < 10; i++)
    	{
	    	printf("******************************************************************************\n");
	    	printf("%s\n", question[i]);
	   	printf("******************************************************************************\n");

		//Printing the options.
		for(j = (i * 4); j <(i * 4) + 4;j++)
		{
			printf("%s\n", options[j]);
		}

		//Getting the input from the userand count the points.
     		count = count + eqanswer(i);
	}
	eqcalculator(count);
	return 0;
}

//Getting the input and giving it the values according the answer.
int eqanswer(int i)
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
			case'A': return 4;
			case'B': return 2;
			case'C': return 3;
			case'D': return 1;
			
			//Let the user get change the input.
			default: 
				printf("The given Input is Invalid.\n");
				goto answer;
		}
	return 0;
}

//This fumction calculates the EQ.
void eqcalculator(int i)
{
	printf("\n===============================================================================\n");
	if (36 < i && i <= 40)
		printf("\nYour EQ is above 145.\nYou have an Exceptional Emotional Intelligence.\n");
    	else if (32 < i && i <= 36)
		printf("\nYour EQ is inbetween 130 and 145.\nYou have an Excellent Emotional Intelligence.\n");
    	else if (28 < i && i <= 32)
		printf("\nYour EQ is inbetween 115 and 130.\nYou have an High Emotional Intelligence.\n");
    	else if (24 < i && i <= 28)
		printf("\nYour EQ is inbetween 100 and 115.\nYou have an Satisfactory Emotional Intelligence.\n");
    	else if (20 < i && i <= 24)
		printf("\nYour EQ is inbetween 85 and 100.\nYou have an Average Emotional Intelligence.\n");
    	else
		printf("\nYour EQ is below 85.\nYou have an very low Emotional Intelligence.\n");
	printf("\n===============================================================================\n");

}