/* C++ program to implement basic stack
operations */
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000
class Stack {
	int top;
public:
	int a[MAX]; // Maximum size of Stack
	Stack() { top = -1; }
	bool push(int x);
	int pop();
    int setsize(int n);
	int Display();
	bool isEmpty();
};
int Stack::setsize(int n)
{
    a[n];
}
bool Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}
int Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int Stack::Display()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

// Driver program to test above functions
int main()
{
	// class Stack s;
	// s.push(10);
	// s.push(20);
	// s.push(30);
	// cout << s.pop() << " Popped from stack\n";
	
	// //print top element of stack after poping
	// cout << "Top element is : " << s.peek() << endl;
	
	// //print all elements in stack :
	// cout <<"Elements present in stack : ";
	// while(!s.isEmpty())
	// {
	// 	// print top element in stack
	// 	cout << s.Display() <<" ";
	// 	// remove top element in stack
	// 	s.pop();
	// }
    Stack arr;
    while(true)
    {
        /* code */
        cout<<"Welcome To Stack!\n What operation would you like to perform\n1. Push\n2. Pop\n3. Display\n4. Quit\n";
        int a;cin>>a;
        switch (a)
        {
        case 1/* constant-expression */:
            /* code */
            cout<<"Enter Value To Be Pushed: ";
            int x;cin>>x;
            arr.push(x);
            break;
        case 2:
            arr.pop();
            break;
        case 3:
            while(!arr.isEmpty()){
                cout<<arr.Display()<<" ";
                arr.pop();
            }
            break;
        default:
            break;
        }

    }
    
	return 0;
}
