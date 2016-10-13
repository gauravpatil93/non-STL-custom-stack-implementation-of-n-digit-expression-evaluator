#include <iostream>
//#include "char_stack.h"

using namespace std;

class IntegerStack {
	private:
		int top;
		int capacity;
		int *storage;
	public:
		IntegerStack();
		IntegerStack(int capacity);
		void operator=(const IntegerStack &obj); 
		void push(int value);
		int peek();
		void pop();
		bool isEmpty();
		int stack_capacity();
		~IntegerStack();
		int top_stk();
};

class StackOverflowException: public exception
{
	
};

class EmptyStack: public exception
{
	
};