/***********************************************************
* Program: HW 7  -  Dynamically-allocated array-based queue
* ==========================================================
* Programmer: Cameron Abo
* Class: CS 1C M/W 10:30a
* File: StrQueue.h
***********************************************************/

#pragma once

#include <iostream>
#include <string>
using namespace std;

class StrQueue
{
private:
	string* ptr;
	int		size;
	int		front;
	int		back;
	int		numItems;

public:
	StrQueue(int);
	~StrQueue();
	void enQueue(string);
	void deQueue(string&);
	bool isEmpty() const;
	bool isFull() const;
	void makeEmpty();
};

