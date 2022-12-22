#include "Stack.h"

template<typename T,int size>
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
	return (m_Top==-1?true:false) ;
}