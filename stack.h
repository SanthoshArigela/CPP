#define STACK_H
#include<iostream>
#include<vector>
using namespace std;
struct stack{
	vector<int>stack;
	int val;
	void push(int val){
		stack.push_back(val);	
	}
	void pop()
	{
		stack.pop_back();
	}
	bool is_empty()
	{
		if(stack.empty()){
			return true;
		}
		else
		{
			return false;
		}
	}
	int top()
	{
		if(is_empty())
		{
			cout << "stack is empty" <<endl;
			return 0;
		}
		else
		{
			return stack.back();
		}
	}
	int size()
	{
		if(!stack.empty())
		{
			return stack.size();	
		}
		else
		{
			cout << "stack is empty" << endl;
			return 0;	
		}
	}

};
