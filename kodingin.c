/*
MADE BY "Aswin Bhusal" FROM CLASS "11" Section "A" THE FUNDTIONS AND PROGRAMS NAME ARE WRITTEN IN "/*"
DO NOTE: FUNCTIONS LIKE "#include <stdlib.h>", "#include <time.h>",and "secret = rand() % 50 + 1;" WERE TAKEN FROM WEB FORMS
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	int choice, c;
	char again;
	
	/* quiz */
	int q, ans, correct, score;
	char correctText[60];
	float percent;
	
	/* guessing game */
	int secret, guess, i, won;
	int wins = 0, games = 0;
	
	/* electricity bill */
	int units, days, dond;
	float bill, vat, discount, fine, total;
	char name[100];
	
	srand(time(NULL));
	
	menu:
	printf("\n==========================================\n");
	printf("             C PROGRAM MENU\n");
	printf("==========================================\n");
	printf("  1. A Quiz On Computer History\n");
	printf("  2. Number Guessing Game\n");
	printf("  3. Electricity Bill Calculator\n");
	printf("  0. Exit\n");
	printf("==========================================\n");
	printf("\nEnter your choice: ");
	if (scanf("%d", &choice) != 1)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		if (c == EOF) return 0;
		choice = -1;
	}
	printf("\n");
	
	if (choice == 1) goto p1;
	if (choice == 2) goto p2;
	if (choice == 3) goto p3;
	if (choice == 0)
	{
		printf("Exiting program. Goodbye!\n");
		goto endChoice;
	}
	printf("Invalid choice, try again.\n");
	goto endChoice;
	
	
	/*QUIZ ON COMPUTER HISTORY*/
	p1:
	score = 0;
	printf("==========================================\n");
	printf("        A QUIZ ON COMPUTER HISTORY\n");
	printf("==========================================\n");
	printf("10 questions, 1 point each.\n");
	printf("Answer with the option's number (1-4).\n");
	
	for (q = 1; q <= 10; q++)
	{
		printf("\nQ%d. ", q);
		
		if (q == 1)
		{
			printf("Who designed the Analytical Engine, an early concept for a mechanical computer?\n"
				"   1) Alan Turing\n"
				"   2) Charles Babbage\n"
				"   3) John von Neumann\n"
				"   4) Blaise Pascal\n");
			correct = 2;
			strcpy(correctText, "Charles Babbage");
		}
		else if (q == 2)
		{
			printf("Who is often considered the world's first computer programmer?\n"
				"   1) Grace Hopper\n"
				"   2) Mary Shelley\n"
				"   3) Ada Lovelace\n"
				"   4) Katherine Johnson\n");
			correct = 3;
			strcpy(correctText, "Ada Lovelace");
		}
		else if (q == 3)
		{
			printf("Which input device, demonstrated by Douglas Engelbart in the 1960s,\n"
				"    changed how people interact with computers?\n"
				"   1) Keyboard\n"
				"   2) Joystick\n"
				"   3) Mouse\n"
				"   4) Light pen\n");
			correct = 3;
			strcpy(correctText, "Mouse");
		}
		else if (q == 4)
		{
			printf("Early computers commonly took in programs and data using what?\n"
				"   1) USB drives\n"
				"   2) Punch cards\n"
				"   3) CDs\n"
				"   4) Cloud storage\n");
			correct = 2;
			strcpy(correctText, "Punch cards");
		}
		else if (q == 5)
		{
			printf("Which company released the first commercially available microprocessor,\n"
				"    the 4004, in 1971?\n"
				"   1) Intel\n"
				"   2) IBM\n"
				"   3) AMD\n"
				"   4) Motorola\n");
			correct = 1;
			strcpy(correctText, "Intel");
		}
		else if (q == 6)
		{
			printf("Who founded Microsoft in 1975?\n"
				"   1) Steve Jobs and Steve Wozniak\n"
				"   2) Bill Gates and Paul Allen\n"
				"   3) Larry Page and Sergey Brin\n"
				"   4) Bill Hewlett and David Packard\n");
			correct = 2;
			strcpy(correctText, "Bill Gates and Paul Allen");
		}
		else if (q == 7)
		{
			printf("Who co-founded Apple with Steve Jobs in 1976?\n"
				"   1) Steve Wozniak\n"
				"   2) Paul Allen\n"
				"   3) Gordon Moore\n"
				"   4) Tim Cook\n");
			correct = 1;
			strcpy(correctText, "Steve Wozniak");
		}
		else if (q == 8)
		{
			printf("Who invented the World Wide Web?\n"
				"   1) Vint Cerf\n"
				"   2) Marc Andreessen\n"
				"   3) Bill Gates\n"
				"   4) Tim Berners-Lee\n");
			correct = 4;
			strcpy(correctText, "Tim Berners-Lee");
		}
		else if (q == 9)
		{
			printf("Who created the Linux kernel in 1991?\n"
				"   1) Richard Stallman\n"
				"   2) Linus Torvalds\n"
				"   3) Dennis Ritchie\n"
				"   4) Ken Thompson\n");
			correct = 2;
			strcpy(correctText, "Linus Torvalds");
		}
		else
		{
			printf("What was the name of the early computer network that led to the modern internet?\n"
				"   1) Ethernet\n"
				"   2) Intranet\n"
				"   3) Telnet\n"
				"   4) ARPANET\n");
			correct = 4;
			strcpy(correctText, "ARPANET");
		}

		do
		{
			printf("\nYour answer (1-4): ");
			if (scanf("%d", &ans) != 1)
			{
				while ((c = getchar()) != '\n' && c != EOF);
				if (c == EOF) return 0;
				ans = 0;
			}
			if (ans < 1 || ans > 4)
			{
				printf("Invalid choice! Please enter 1, 2, 3 or 4.\n");
			}
		} while (ans < 1 || ans > 4);
		
		if (ans == correct)
		{
			printf("Correct! +1 point\n");
			score++;
		}
		else
		{
			printf("Wrong! The correct answer is %d) %s\n", correct, correctText);
		}
	}
	
	percent = score * 100.0 / 10;
	printf("\n------------------------------------------\n");
	printf("Score      : %d / 10\n", score);
	printf("Percentage : %.1f%%\n", percent);
	if (score == 10)
		printf("Perfect score! You're a computer history master!\n");
	else if (percent >= 70)
		printf("Great job! You know your computer history.\n");
	else if (percent >= 40)
		printf("Not bad, but there's room to improve.\n");
	else
		printf("Better luck next time. Give it another try!\n");
	
	printf("\nTake the quiz again? (y/n): ");
	scanf(" %c", &again);
	if (again == 'y' || again == 'Y') goto p1;
	goto endChoice;
	
	
	/*NUMBER GUESSING GAME*/
	p2:
	secret = rand() % 50 + 1;
	won = 0;
	
	printf("==========================================\n");
	printf("          NUMBER GUESSING GAME\n");
	printf("==========================================\n");
	printf("I'm thinking of a number between 1 and 50.\n");
	printf("You have 7 guesses.\n");
	
	for (i = 1; i <= 7; i++)
	{
		printf("\nGuess %d of 7\n", i);
		
		do
		{
			printf("----> ");
			if (scanf("%d", &guess) != 1)
			{
				while ((c = getchar()) != '\n' && c != EOF);
				if (c == EOF) return 0;
				guess = 0;
			}
			if (guess < 1 || guess > 50)
			{
				printf("Please enter a number between 1 and 50.\n");
			}
		} while (guess < 1 || guess > 50);
		
		if (guess == secret)
		{
			printf("\nCongratulations! You guessed it in %d guess(es)!\n", i);
			won = 1;
			break;
		}
		
		if (guess < secret)
			printf("Wrong! The secret number is higher.\n");
		else
			printf("Wrong! The secret number is lower.\n");
		
		if (i == 3)
		{
			if (secret % 2 == 0)
				printf("Hint: the number is even.\n");
			else
				printf("Hint: the number is odd.\n");
		}
	}
	
	games++;
	if (won)
		wins++;
	else
		printf("\nOut of guesses! The number was %d.\n", secret);
	
	printf("\nWins: %d out of %d game(s)\n", wins, games);
	
	printf("\nPlay again? (y/n): ");
	scanf(" %c", &again);
	if (again == 'y' || again == 'Y') goto p2;
	goto endChoice;
	
	
	/*ELECTRICITY BILL CALCULATOR*/
	p3:
	printf("==========================================\n");
	printf("      ELECTRICITY BILL CALCULATOR\n");
	printf("==========================================\n");
	
	printf("Customer name: ");
	scanf(" %[^\n]", name);
	
	printf("Units used: ");
	if (scanf("%d", &units) != 1)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		units = -1;
	}
	if (units < 0)
	{
		printf("\nError: units must be a non-negative number.\n");
		goto p3_again;
	}
	
	printf("Category (1 = Domestic, 2 = Non-Domestic): ");
	if (scanf("%d", &dond) != 1)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		dond = 0;
	}
	if (dond != 1 && dond != 2)
	{
		printf("\nError: invalid category.\n");
		goto p3_again;
	}
	
	printf("Days since billing: ");
	if (scanf("%d", &days) != 1)
	{
		while ((c = getchar()) != '\n' && c != EOF);
		days = -1;
	}
	if (days < 0)
	{
		printf("\nError: days cannot be negative.\n");
		goto p3_again;
	}
	
	if (units <= 100)
		bill = units * 5;
	else if (units <= 200)
		bill = 500 + (units - 100) * 7;
	else if (units <= 300)
		bill = 1200 + (units - 200) * 10;
	else if (units <= 500)
		bill = 2200 + (units - 300) * 12;
	else
		bill = 4600 + (units - 500) * 13;
	
	/* VAT */
	if (dond == 1)
		vat = bill * 0.05;
	else
		vat = bill * 0.13;
	
	/* discount or fine */
	discount = 0;
	fine = 0;
	if (days <= 5)
		discount = bill * 0.05;
	else if (days > 15)
		fine = bill * 0.05;
	
	total = bill + vat - discount + fine;
	
	printf("\n========== ELECTRICITY BILL ==========\n");
	printf("Name           : %s\n", name);
	printf("Category       : %s\n", dond == 1 ? "Domestic" : "Non-Domestic");
	printf("Units used     : %d\n", units);
	printf("Energy charge  : Rs. %.2f\n", bill);
	printf("VAT            : Rs. %.2f\n", vat);
	if (discount > 0)
		printf("Discount       : Rs. %.2f\n", discount);
	else if (fine > 0)
		printf("Fine           : Rs. %.2f\n", fine);
	else
		printf("Discount/Fine  : Rs. 0.00\n");
	printf("--------------------------------------\n");
	printf("Final bill     : Rs. %.2f\n", total);
	printf("======================================\n");
	
	p3_again:
	printf("\nCalculate another bill? (y/n): ");
	scanf(" %c", &again);
	if (again == 'y' || again == 'Y') goto p3;
	
	
	endChoice:
	if (choice != 0) goto menu;
	
	return 0;
}
