# Dynamically-allocated-array-based-queue
## About
This code contains a class that functions as a queue data structure using a dynamic array of strings. The queue data structure is a FIFO (First In First Out) data structure which is opposite of a heap data structure which is defined as FILO (First In Last Out). The overloaded class constructor will create a dynamically allocated array of strings with the size of the integer passed through the constructor and will initialize the front and back indexes and the item count to null values. The class destructor will dynamically deallocate the string array created in the constructor. The program will prompt the user to enter five cities and correctly store the city strings into the dynamic array. It will then display the cities back to the user in FIFO order and then deallocate the dynamic class object.

![image](https://github.com/JusDooEt/Dynamically-allocated-array-based-queue/assets/152052216/38aa6918-bf74-48dd-b8d5-8d7f015bde4e)

## ScreenIO
```
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

Press any key to continue . . .
```
## [Methods](StrQueue.cpp)
### ```enQueue(string str)```
- If the queue is not full, this method will increment the back index and use it to assign the string variable being passed through the method to the appropriate spot in the array that aligns with the queue. Otherwise it will display a message to the user stating the queue is full.
### ```deQueue(string& str)```
- If the queue is not empty, this method will increment the front index and assign the string value being passed by reference to the item at index front of the array. Otherwise, it will display a message to the user stating the queue is empty.
### ```isFull() const```
- This method returns the comparison of numItems == size and displays a message to the user that the queue is full.
### ```isEmpty() const```
- This method returns the comparison of numItmes > 0 and displays a message to the user that the queue is empty.

