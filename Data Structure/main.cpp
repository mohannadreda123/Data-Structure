#include <iostream>
#include"linked list.cpp"
using namespace std; 
int main()
{
	Linked_List list;
	list.display();

	list.search(5);

	list.insertAtBegin(10);
	list.insertAtEnd(20);
	list.insertAtEnd(30);
	list.insertAtBegin(0);

	list.display();

	list.reverse();
	list.display();

	list.search(5);
	list.search(10);

	list.delete_target(10);
	list.display();

	list.deleteAtBegin();
	list.display();

	list.deleteAtEnd();
	list.display();
	return 0;
}