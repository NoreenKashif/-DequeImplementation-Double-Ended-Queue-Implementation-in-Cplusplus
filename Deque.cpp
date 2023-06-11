#include"Deque.h"
#include<iostream>
using namespace std;
template <typename T>
Deque<T>::Deque()
{
	data = nullptr;
	int tail=0;
	int head=0;
	int capacity=0;
	int noOfElement=0;
}
template <typename T>
Deque<T>::~Deque()
{
	if(!data)
		delete[]data;
	data = nullptr;
	int tail = 0;
	int head = 0;
	int capacity = 0;
	int noOfElement = 0;
}

template <typename T>
void Deque<T>::reSize(int cap)
{
	T* temp = new T[cap];
	int i;
	for (i = 0; i < cap && i < noOfElement; i++)
	{
		temp[i] = data[i];
	}
	int tail1 = tail;
	int head1 = head;
	int noOfElement1 = noOfElement;
	this->~Deque();
	data = temp;
	tail = tail1;
	head = head1;
	capacity = cap;
	noOfElement = noOfElement1;
}
template <typename T>
void Deque<T>::insertAtTail(T val)
{
	if (isFull())
	{
		//capacity++;
		reSize(capacity == 0 ? capacity = 1; capacity * 2);
	}
	/*if (tail == capacity)
	{
		tail = 0;
	}*/
	
	data[tail] = val;
	tail = (tail + 1) % capacity;
	noOfElement++;
		
}
template <typename T>
void Deque<T>::insertAtHead(T value)
{
	if (isFull())
	{
		//capacity++;
		reSize(capacity == 0 ? capacity = 1; capacity * 2);
	}
	head = (head - 1 + capacity) % capacity;
	data[head] = value;
	//cout << data[head - 1] << " ";
	noOfElement++;

}
template <typename T>
T Deque<T>::deleteAtTail()
{
	if (isEmpty())
	{
		cout << "\nDeque is Empty!!!!!!!\n";
		exit(0);
	}
	
	T val1 = data[tail];
	tail = (tail - 1) % capacity;
	if (noOfElement == capacity / 4)
		reSize(capacity / 2);
	noOfElement--;
	return val1;

}
template <typename T>
T Deque<T>::deleteAtHead()
{
	if (isEmpty())
	{
		cout << "\nDeque is empty!!!!!!!\n";
		exit(0);
	}
	/*if (head == tail)
	{
		front = 0;
		rear = 0;
	}
	else if (head = capacity - 1)
		front = 0;*/
	T val2 = data[head];
	head = (head + 1) % capacity;
	noOfElement--;
	return val2;
}
template <typename T>
T Deque<T>::getNoOfElement()
{
	return noOfElement;
}
template <typename T>
bool Deque<T>::isEmpty()
{
	return (noOfElement==0);

}
template <typename T>
bool Deque<T>::isFull()
{
	if (noOfElement==capacity)
		return true;
	return false;
}
template <typename T>
int Deque<T>::getCapacity()
{
	return capacity;
}