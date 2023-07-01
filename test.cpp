#include <iostream>
#include "array.hpp"

template <class T, std::size_t N>
void testArrayFunctions()
{
    Array<T, N> arr;

    std::cout << "Size of array: " << arr.size() << std::endl;
    std::cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;

    arr[0] = 1;
    arr[N - 1] = 10;
    std::cout << "Front element: " << arr.front() << std::endl;
    std::cout << "Back element: " << arr.back() << std::endl;

    std::cout << "Element at index 5: " << arr.at(5) << std::endl;

    arr[2] = 5;
    std::cout << "Element at index 2 (using operator[]): " << arr[2] << std::endl;

    arr.swap(0, N - 1);
    std::cout << "After swapping first and last elements: " << arr.front() << ", " << arr.back() << std::endl;

    Array<T, N>* arrPtr = new Array<T, N>;
    delete arrPtr;
}

int main()
{
    testArrayFunctions<int, 10>();  // Test with int type and size 10

    return 0;
}
