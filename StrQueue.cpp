/***********************************************************
* Program: HW 7  -  Dynamically-allocated array-based queue
* ==========================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
* File: StrQueue.cpp
***********************************************************/
#include "StrQueue.h"
//----------------------------------------------------------
StrQueue::StrQueue(int queSize)
{
	ptr = new string[queSize];
	size = queSize;
	front = -1;
	back = -1;
	numItems = 0;
}
//----------------------------------------------------------
StrQueue::~StrQueue()
{
	delete []ptr;
}
//----------------------------------------------------------
void StrQueue::enQueue(string str)
{
	if (isFull())
	{
		cout << "The queue is full.\n";
	}
	else
	{
		back = (back + 1) % size;
		ptr[back] = str;
		numItems++;
	}
}
//----------------------------------------------------------
void StrQueue::deQueue(string& str)
{
	if (isEmpty())
	{
		cout << "The queue is empty.\n";
	}
	else
	{
		front = (front + 1) % size;
		str = ptr[front];
		numItems--;
	}
}
//----------------------------------------------------------
bool StrQueue::isFull() const
{	
	if (numItems == size)
	{
		cout << "\nThe queue is full.\n";
		return true;
	}
	return false;
}
//----------------------------------------------------------
bool StrQueue::isEmpty() const
{
	if (numItems > 0)
		return false;
	cout << "\nThe queue is empty.\n";
	return true;
}
//----------------------------------------------------------
void StrQueue::makeEmpty()
{
	front = size - 1; 
	back = size - 1;
	numItems = 0;
}