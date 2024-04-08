/***********************************************************
* Program: HW 7  -  Dynamically-allocated array-based queue
* ==========================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
* File: Source.cpp
***********************************************************/

#include "Queue.h"

int main()
{
	const int QUEUE_SIZE = 5;
	float valIn;
	Queue* strPtr;
	strPtr = new Queue(QUEUE_SIZE);

	cout << "Enter " << QUEUE_SIZE << " values of float data type.\n\n";

	while (!strPtr->isFull())
	{
		cout << "Enter a value:  ";
		cin >> valIn;
		cin.ignore();
		strPtr->enQueue(valIn);
		
		//cout << "end of while loop\n";
	}

	cout << "\nNow dequeing...\n";
	cout << "\nHere are the numbers:\n\n";
	
	while (!strPtr->isEmpty())
	{
		strPtr->deQueue(valIn);
		cout << valIn << '\n';
	}

	cout << endl;
	system("pause");
	strPtr->makeEmpty();
	delete strPtr;
	return 0;
}



/* OUTPUT
Enter the name of 5 cities.

Enter a city:  Los Angeles
Enter a city:  Paris
Enter a city:  New York
Enter a city:  Stockholm
Enter a city:  Vienna

The queue is full.

Now dequeing...

Here are the cities:

Los Angeles
Paris
New York
Stockholm
Vienna

The queue is empty.

Press any key to continue . . .*/