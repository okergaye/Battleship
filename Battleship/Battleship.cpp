// Battleship.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//*************************************************
//THIS IS A BATTLESHIP GAME CREATED BY MALIK QADER*
//FOR MR. WEBSTER IN HIS B3 CLASS 21/03/17 11:33  *
//*************************************************
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
	Git branch switch test
*/
int main(int argc, char *argv[])
{
	int x, y;
	int shipnumber = 3; //VARIABLES
	int win = 0;
	int threeship = 3;
	int fourship = 4;
	int fiveship = 5;
	int computer[10][10] = { { 0,0,0,3,0,0,0,5,0,0 },   //THE ARRAY TABLE THE SHIPS ARE ON        
	{ 0,0,0,3,0,0,0,5,0,0 },   //AND THE PLAYERS DON'T SEE 
	{ 0,0,0,3,0,0,0,5,0,0 },
	{ 0,0,0,0,0,0,0,5,0,0 },
	{ 0,0,0,0,0,0,0,5,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,4,4,4,4,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 } };


	int playertable[10][10] = { { 0,0,0,0,0,0,0,0,0,0 },    //THIS IS THE BOARD THE PLAYERS WILL SEE       
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0 } };


	cout << "WELCOLME TO BATTLESHIP" << endl;     //ENTERING WORDS FOR NEW PLAYERS
	cout << "Rules: HIT = 3, 4, or 5     MISS = 2" << endl;
	cout << "Please enter your coordinates between 0 and 9" << endl;
	do
	{
		//BELOW IS THE Y AXIS FOR EASY COORDINATES VISUALIZATION
		cout << "0       1       2       3       4       5       6       7       8       9" << endl << endl << endl;


		for (y = 0; y<10; y++)
		{
			for (x = 0; x<10; x++)
			{

				cout << playertable[y][x] << "\t";  //THIS WILL PRINT OUT THE PLAYERS TABLE
			}
			cout << "\n";
		}

		cout << "Enter the X coordinate" << endl; //THIS TELLS THE PLAYER TO ENTER
		cin >> x;                               //THE COORDINATES
		cout << "Enter the Y coordinate" << endl;
		cin >> y;

		if (computer[y][x] == 3)
		{
			cout << "HIT" << endl;
			threeship = threeship - 1;          //THIS WILL PRINT OUT HIT AND LOWER
			playertable[y][x] = 3;         //THE THREESHIP COUNT
		}


		if (computer[y][x] == 4)       //DITTO
		{
			fourship = fourship - 1;
			cout << "HIT" << endl;
			playertable[y][x] = 4;
		}

		if (computer[y][x] == 5)      //DITTO
		{
			fiveship = fiveship - 1;
			cout << "HIT" << endl;
			playertable[y][x] = 5;
		}

		if (threeship == 0)
		{
			cout << "You sank my CARAVEL!" << endl;     //THIS WILL TELL THE USER
			shipnumber = shipnumber - 1;                 //THE SHIP HAS SUNK
			threeship = threeship + 1;
		}

		if (fourship == 0)
		{
			cout << "You sank my FRIGATE!" << endl;     //DITTO
			shipnumber = shipnumber - 1;
			fourship = fourship + 1;
		}

		if (fiveship == 0)
		{
			cout << "You sank my GALLEON!" << endl;      //DITTO
			shipnumber = shipnumber - 1;
			fiveship = fiveship + 1;
		}



		if (computer[y][x] == 0)       //THIS TELLS THE USER IF THEY MISSED
		{
			cout << "MISS" << endl;
			playertable[y][x] = 2;
		}


	} while (shipnumber != 0); //THIS WILL END THE GAME


	cout << "YOU SANK ALL MY BATTLE SHIPS!" << endl; //THESE WORDS WILL APPEAR
	cout << "YOU WIN" << endl;                       //ONCE YOU WIN THE GAME


	system("PAUSE");
	return EXIT_SUCCESS;
}
