#pragma once
#include <iostream>
using namespace std;

template<typename T,int size>
class Stack
{
public:
	T m_buffer[size]{};
	int m_Top{-1};

	Stack() = default;
	void Push(const T& elem);
	void Pop();
	const T& Top();
	bool isEmpty();
};

