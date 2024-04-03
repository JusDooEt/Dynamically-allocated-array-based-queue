/***********************************************************
* Program: HW 7  -  Dynamically-allocated array-based queue
* ==========================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
* File: Source.cpp
***********************************************************/

#include "StrQueue.h"

int main()
{
	const int QUEUE_SIZE = 5;
	string city;
	StrQueue* strPtr;
	strPtr = new StrQueue(QUEUE_SIZE);

	cout << "Enter the name of " << QUEUE_SIZE << " cities.\n\n";

	while (!strPtr->isFull())
	{
		cout << "Enter a city:  ";
		getline(cin, city);
		
		strPtr->enQueue(city);
		
		//cout << "end of while loop\n";
	}

	cout << "\nNow dequeing...\n";
	cout << "\nHere are the cities:\n\n";
	
	while (!strPtr->isEmpty())
	{
		strPtr->deQueue(city);
		cout << city << '\n';
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