// Andy Lim
// CIS-5 Hybrid
// 10/8/2021
// Midterm

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int choice;
	int numGymnasts = 0;
	double score1 = 0, score2 = 0, score3 = 0;
	string gymName;
	const string error = "Wrong input. Try again please.";
	const string quitProgram = "Thanks for using the program. Godbye :) \n";
	double avgScore;
	char decision;
	do
	{

	
	cout << "Welcome to the Flying Graysons. Today we will be holding a competition based on your gymnastic skills." << endl; // displays user welcome message

	cout << "Select which type of judges will be used during this competition." << endl;// displays a menu for the user

	cout << "3 Judges (1) " << endl;// makes the user select 3 judges
	cout << "5 Judges (2) " << endl;// makes the user select 5 judges
	cout << "Quit (3) " << endl;// makes the user quit
	cin >> choice;

	switch (choice)// user has selected 3 judges
	{
	case 1:
		cout << "You've Selected 3 Judges\n";

		cout << "How many people are participating between 1 and 20" << endl;// user types in how many people are going to be participating
		cin >> numGymnasts;
		while (numGymnasts < 1 || numGymnasts > 20)// sets a limit between 1 and 20
		{
			cout << error << endl;
			cin >> numGymnasts;
		}
		for (int g = 0; g < numGymnasts; g++) // varible is declared
		{
			cout << "What is the name of the gymnasts? " << endl;// name of gymnasts
			cin >> gymName;

			cout << "Please input the participants score between 1 and 10. " << endl;// selects a score between 1 and 10 and allows the user to no exceed 1 and 10
			cout << "Enter the first judges score. " << endl;
			cin >> score1;
			while (score1 < 1 || score1 > 10)
			{
				cout << "That is an incorrect score. Please put in a valid score. " << endl;// wrong input
				cin >> score1;
			}
			cout << "Enter the second judges score. " << endl;
			cin >> score2;
			while (score2 < 1 || score2 > 10)
			{
				cout << "That is an incorrect score. Please valid score. " << endl;
				cin >> score2;
			}
			cout << "Enter the third judges score. " << endl;
			cin >> score3;
			while (score3 < 1 || score3 > 10)
			{
				cout << "That is an incorrect score. Please valid score. " << endl;
				cin >> score3;
			}

		}
		avgScore = (score1 + score2 + score3) / 3;// calculatest the average score
		cout << "Average score for the particitpant " << gymName << " is " << avgScore << endl;

		break;

	case 2:
		cout << "You've Selected 5 Judges\n";

		cout << "How many people are participating between 1 and 50" << endl;// user types in how many people are going to be participating
		cin >> numGymnasts;
		while (numGymnasts < 1 || numGymnasts > 50)// sets a limit between 1 and 50
		{
			cout << error << endl;
			cin >> numGymnasts;
		}
		for (int i = 0; i < numGymnasts; i++) // varible is declared
		{
			cout << "What is the name of the gymnasts? " << endl;// name of gymnasts
			cin >> gymName;

			cout << "Please input the participants score between 1 and 10. " << endl;// selects a score between 1 and 10 and allows the user to no exceed 1 and 10
			cout << "Enter the first judges score. " << endl;
			cin >> score1;
			while (score1 < 1 || score1 > 10)
			{
				cout << "That is an incorrect score. Please input a valid score. " << endl;// wrong input
				cin >> score1;
			}
			cout << "Enter the second judges score. " << endl;
			cin >> score2;
			while (score2 < 1 || score2 > 10)
			{
				cout << "That is an incorrect score. Please intput a valid score. " << endl;
				cin >> score2;
			}
			cout << "Enter the third judges score. " << endl;
			cin >> score3;
			while (score3 < 1 || score3 > 10)
			{
				cout << "That is an incorrect score. Please input a valid score. " << endl;
				cin >> score3;
			}

		}
		avgScore = (score1 + score2 + score3) / 5;// calculatest the average score
		cout << "Average score for the particitpant " << gymName << " is " << avgScore << endl;

		break;


	case 3:// makes the program exit
		cout << "You have left the program." << endl << endl;
		cout << quitProgram << endl;
		break;
	}
	cout << "Do you wish to run the program again? (Y/N) " << endl;// makes the viewer run the program again
	cin >> decision;
	} while (decision == 'y' || decision == 'Y');
	
	system("pause");
	return 0;
}
