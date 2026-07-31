#include <iostream>
using namespace std;
class Linked_List
{
private:
	struct Node
	{
		int data;
		Node* next;
	};
	Node* head = nullptr;
public:
	void display()
	{
		Node* temp = head;
		if (head == nullptr)
		{
			cout << "The Linked List is Empty\n";
			return;
		}
		cout << "The Linked List : ";
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";
	}
	void search(int target)
	{
		if (head == nullptr)
		{
			cout << "The List is Empty\n";
			return;
		}
		Node* temp = head;
		while (temp != nullptr)
		{
			if (temp->data == target)
			{
				cout << "The target value Found\n";
				return;
			}
			temp = temp->next;
		}
		cout << "The target value Not Found\n";
	}
	void reverse()
	{
		Node* temp = head;
		Node* prev = nullptr;
		Node* next = nullptr;
		while (temp != nullptr)
		{
			next = temp->next;
			temp->next = prev;
			prev = temp;
			temp = next;
		}
		head = prev;
		cout << "Reverse done Successfully\n";
	}
	void insertAtBegin(int value)
	{
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = head;
		head = newNode;
	}
	void insertAtEnd(int value)
	{
		Node* newNode = new Node();
		Node* temp = head;
		newNode->data = value;
		newNode->next = nullptr;
		if (temp == nullptr)
		{
			head = newNode;
			return;
		}
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	void delete_target(int target)
	{
		if (head == nullptr)
		{
			cout << "The list is Empty\n";
			return;
		}
		if (head->data == target)
		{
			deleteAtBegin();
			return;
		}
		Node* temp = head;
		Node* prev = nullptr;
		while (temp != nullptr && temp->data != target)
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp == nullptr)
		{
			cout << "Target (" << target << ") Not Found to delete!\n";
			return;
		}
		prev->next = temp->next;
		delete temp;
		cout << "Target (" << target << ") deleted successfully.\n";
	}
	void deleteAtBegin()
	{
		if (head == nullptr)
		{
			cout << "The list is Empty\n";
			return;
		}
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	void deleteAtEnd()
	{
		if (head == nullptr)
		{
			cout << "The list is Empty\n";
			return;
		}
		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
			return;
		}
		Node* temp = head;
		while (temp->next->next != nullptr)
		{
			temp = temp->next;
		}
		delete temp->next;
		temp->next = nullptr;
	}
};