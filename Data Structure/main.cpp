#include <iostream>
#include"linked list.cpp"
#include"stack.cpp"
#include"queue.cpp"
using namespace std; 
int main()
{
	// Try (Linked List)
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

	cout << "=================================\n";
	/*=====================================================================
	=====================================================================*/

	// Try (Stack)
	Stack stc(5);

	stc.isEmpty();

	stc.push(10);
	stc.push(20);
	stc.push(30);

	stc.display();

	cout << stc.peek() << "\n";

	stc.pop();

	stc.isEmpty();

	cout << stc.peek() << "\n";

	stc.isFull();

	cout << "=================================\n";
	/*=====================================================================
	=====================================================================*/

	// Try (Queue)
	Queue que(5);

	que.isEmpty();

	que.push(10);
	que.push(20);
	que.push(30);

	que.display();

	cout << que.peek() << "\n";

	que.pop();

	que.isEmpty();

	cout << que.peek() << "\n";

	stc.isFull();

	return 0;
}