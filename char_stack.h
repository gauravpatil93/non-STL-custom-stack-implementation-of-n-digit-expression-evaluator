#include <iostream>

using namespace std;

class CharStack {
	private:
		int top;
		int capacity;
		char *storage;
	public:
		CharStack();
		CharStack(int capacity);
		void operator=(const CharStack &obj); 
		void push(char value);
		char peek();
		void pop();
		bool isEmpty();
		int stack_capacity();
		~CharStack();
		char top_stk();
};

class StackOverflowExceptionChar: public exception
{
	
};

class EmptyStackChar: public exception
{
	
};