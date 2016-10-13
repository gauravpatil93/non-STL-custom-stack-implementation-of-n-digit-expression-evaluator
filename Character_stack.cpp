#include "char_stack.h"

CharStack::CharStack() {
	this->capacity = 1000;
	storage = new char[capacity];
	top = -1;
}

CharStack::CharStack(int capacity) {
	storage = new char[capacity];
	this->capacity = capacity;
	top = -1;
}

void CharStack::operator=(const CharStack &obj) {
	top = obj.top;
	storage = new char[capacity];
	memcpy(storage, obj.storage, capacity * sizeof(char));
}

void CharStack::push(char value) {
	if (top == capacity) {
		StackOverflowExceptionChar Overflow;
		throw Overflow;
	}
	top++;
	storage[top] = value;
}

char CharStack::peek() {
	if (top == -1) {
		EmptyStackChar empty;
		throw empty;
	}
	return storage[top];
}

void CharStack::pop() {
	if (top == -1) {
		EmptyStackChar empty;
		throw empty;
	}
	top--;
}

bool CharStack::isEmpty() {
	return (top == -1);
}

int CharStack::stack_capacity() {
	return capacity;
}

CharStack::~CharStack() {
	delete[] storage;
}

char CharStack::top_stk() {
	return storage[top];
}