#ifndef DEQUE_H
#define DEQUE_H
#include<iostream>
template <typename T>
class Deque
{
	int tail;
	int head;
	int capacity;
	int noOfElement;
	T* data;
	void reSize(int);
public:
	Deque();
	~Deque();
	void insertAtTail(T);
	void insertAtHead(T);
	T deleteAtTail();
	T deleteAtHead();
	T getNoOfElement();
	bool isEmpty();
	bool isFull();
	int getCapacity();


};
#endif

