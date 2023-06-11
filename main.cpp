#include"Deque.h"
#include<iostream>
using namespace std;
int main()
{
	Deque<int> deck;
	deck.insertAtHead(100);
	cout<<"Deletion is"<<deck.deleteAtHead() << "\n";
	deck.insertAtHead(10);
	deck.insertAtHead(20);
	deck.insertAtHead(30);
	deck.insertAtHead(40);
	deck.insertAtHead(50);
	cout<<deck.deleteAtTail()<<"\n";
	cout << deck.deleteAtHead()<<"\n";
	cout << deck.getCapacity()<<"\n";
	cout << deck.getNoOfElement();





	return 0;
}