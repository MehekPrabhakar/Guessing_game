// Guessing_game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//We need two users in the game
	//1st user = host user
	//2nd user = guest user
	//host user will enter a number (not visible to the guest user) and the guest has to guess the number

	int hostUserNum, guestUserNum;

	cout << "Host: ";
	cin >> hostUserNum;

	system("cls");

	cout << "Guest: ";
	cin >> guestUserNum;


	(hostUserNum == guestUserNum) ? cout << "Won!" : cout << "Lost, the number was " << hostUserNum;

	/*
	Using if else method:
	
	if (guestUserNum == hostUserNum)
	{
		cout << "Won";
	}
	else
	{
		cout << "Lost, the number was " << hostUserNum;
	}*/

	system("pause>0");
}
