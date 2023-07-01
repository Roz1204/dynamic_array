#ifndef ARRAY
#define ARRAY

#include <iostream>

template <class T, std::size_t N>
class Array
{
	public:
		Array();
		~Array();
		T back();
		T front();
		T at(int index);
		T& operator[](int index);
		int size();
		bool empty();
		void swap(int in1, int in2);
	private:
		T* arr;
};

template <class T, std::size_t N>
Array<T, N>::Array() 
{ 
	if (N > 0)
	{
		arr = new T[N];
		for (int i = 0; i < N; ++i)
		{
			arr[i] = 0;
		}
	}
	else
	{
		throw std::runtime_error("invalid size");
	}
}


template <class T, std::size_t N>
Array<T, N>::~Array()
{
	delete[] arr;
}

template <class T, std::size_t N> T
Array<T, N>::back()
{
	return *(arr + N - 1);
}


template <class T, std::size_t N> T
Array<T, N>::front()
{
	return *arr;
}

template <class T, std::size_t N> T
Array<T, N>::at(int index)
{
	if(index >= 0 && index < N)
	{
		return *(arr + index);
	}
	else
	{
		throw std::runtime_error("invalid index");
	}
}

template <class T, std::size_t N> T&
Array<T, N>::operator[](int index)
{
	return *(arr + index);
}


template <class T, std::size_t N> int 
Array<T, N>::size()
{
	return N;
}

template<class T, std::size_t N> bool
Array<T, N>::empty()
{
	return (N <= 0) ? true : false;
}

template<class T, std::size_t N> void
Array<T, N>::swap(int in1, int in2)
{
	int tmp = arr[in1];
	arr[in1] = arr[in2];
	arr[in2] = tmp;
}
#endif
