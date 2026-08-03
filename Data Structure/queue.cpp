#include <iostream>
#include <vector>
using namespace std;
class Queue
{
private:
	int max;
	vector<int>que;
public:
	Queue(int n) { max = n; }
	int size()
	{
		return que.size();
	}
	void push(int n)
	{
		if (isFull()) { return; }
		que.push_back(n);
	}
	void pop()
	{
		if (isEmpty()) { return; }
		que.pop_back();
	}
	bool isEmpty()
	{
		if (que.empty())
		{
			cout << "Queue is Empty!\n";
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
		return que.at(0);
	}
	void display()
	{
		if (isEmpty()) { return; }
		for (int i = 0; i <= size() - 1; i++) { cout << que.at(i) << " "; }
		cout << "\n";
	}
};