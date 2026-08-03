#include <iostream>
#include <vector>
using namespace std;
class Stack
{
private:
	int max;
	vector<int>stc;
public:
	Stack(int n) { max = n; }
	int size()
	{
		return stc.size();
	}
	void push(int n)
	{
		if (isFull()) 
		{
			cout << "Stack is Full!\n";
			return;
		}
		stc.push_back(n);
	}
	void pop()
	{
		if (isEmpty()) { return; }
		stc.pop_back();
	}
	bool isEmpty()
	{
		if (stc.empty())
		{
			cout << "Stack is Empty!\n";
			return true;
		}
		return false;
	}
	bool isFull()
	{
		if (size() == max) { return true; }
		return false;
	}
	int peek()
	{
		if (isEmpty()) { return 0; }
		return stc.back();
	}
	void display()
	{
		if (isEmpty()) { return; }
		for (int i = size() - 1; i >= 0; i--) { cout << stc.at(i) << " "; }
		cout << "\n";
	}
};