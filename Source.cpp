#include <iostream>
//#include "Stack.h"
using namespace std;

template<typename T, int size>
class Stack
{
public:
	T m_buffer[size]{};
	int m_Top{ -1 };

	Stack() = default;
	Stack(const Stack& obj); 
	void Push(const T& elem);
	void Pop();
	const T& Top();
	bool isEmpty();
	static Stack Create();
};

template<typename T, int size>
Stack<T,size>::Stack<T, size>(const Stack<T, size>& obj){
	m_Top = obj.m_Top;
	for (int i = 0; i <= obj.m_Top; i++)
	{
		m_buffer[i] = obj.m_buffer[i];
	}
}

template<typename T,int size>
Stack<T, size> Stack<T,size>::Create() {
	return Stack<T, size>();
}
template<typename T, int size>
void Stack<T, size>::Push(const T& elem) {
	m_buffer[++m_Top] = elem;
}

template<typename T, int size>
void Stack<T, size>::Pop() {
	--m_Top;
}

template<typename T, int size>
const T& Stack<T, size>::Top() {
	return m_buffer[m_Top];
}

template<typename T, int size>
bool Stack<T, size>::isEmpty() {
	return (m_Top == -1 ? true : false);
}

int main()
{
	Stack<int,10> s = Stack<int,10>::Create();
	s.Push(2);
	s.Push(3);
	s.Push(4);
	s.Push(5);
	s.Push(6);
	s.Push(7);

	Stack<int, 10> s2(s);

	while (!s2.isEmpty())
	{
		cout << s2.Top() << " ";
		s2.Pop();
	}
	return 0;

}