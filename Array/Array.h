#pragma once
#include <iostream>

template <typename T>
class Array {
private:
	T *m_array;
	int m_length;
	int m_start_index;

public:
	Array();


	~Array();
};

template<typename T>
inline Array<T>::Array() : m_array(nullptr), m_length(0), m_start_index(0) {}

template<typename T>
inline Array<T>::~Array() {}


