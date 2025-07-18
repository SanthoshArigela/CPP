#include"stack.h"
#include<iostream>
using namespace std;
int main()
{
	stack st;
	int ch;
	while(1)
	{
		cout << "ENTER THE OPTIONS:" << endl << "1.PUSH\n" << "2.POP\n" << "3.PEEK\n" << "4.SIZE OF STACK" << endl;
		cin >> ch;
		if(ch==1)
		{
			int val;
			cout << "enter the value to enter: ";
			cin >> val;
			st.push(val);
		}  
		else if(ch==2)
		{
			st.pop();
		}
		else if(ch==3)
		{
			cout << st.top() << endl;
		}
		else if(ch==4)
		{
			cout << st.size() << endl;
		}
		else
		{
			cout << "thank you\n";
			return 0;
		}
	}
}
