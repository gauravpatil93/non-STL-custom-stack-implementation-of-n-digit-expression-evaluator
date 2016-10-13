#include "int_stack.h"

IntegerStack::IntegerStack() {
	this->capacity = 1000;
	storage = new int[capacity];
	top = -1;
}

IntegerStack::IntegerStack(int capacity) {
	storage = new int[capacity];
	this->capacity = capacity;
	top = -1;
}

void IntegerStack::operator=(const IntegerStack &obj) {
	top = obj.top;
	storage = new int[capacity];
	for (int i = 0; i < capacity; i++) {
		storage[i] = 0;
	}
	memcpy(storage, obj.storage, capacity * sizeof(int));
}

void IntegerStack::push(int value) {
	if (top == capacity) {
		StackOverflowException Overflow;
		throw Overflow;
	}
	top++;
	storage[top] = value;
}

int IntegerStack::peek() {
	if (top == -1) {
		EmptyStack empty;
		throw empty;
	}
	return storage[top];
}

void IntegerStack::pop() {
	if (top == -1) {
		EmptyStack empty;
		throw empty;
	}
	top--;
}

bool IntegerStack::isEmpty() {
	return (top == -1);
}

int IntegerStack::stack_capacity() {
	return capacity;
}

IntegerStack::~IntegerStack() {
	delete[] storage;
}

int IntegerStack::top_stk() {
	return storage[top];
}