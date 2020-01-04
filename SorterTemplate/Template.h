#pragma once
#include <string>
#include <vector>
#include <iostream>

#include <algorithm>

template<typename T>
class Template
{
private:
	//declare queue-semantics so we can carry out the public functions
	void _get(std::vector<T> elements);
	void _put(std::vector<T> elements);
	int _size(std::vector<T> elements);


public:
	Template(std::vector<T> elements);
	~Template(std::vector<T> elements);

	auto sort(std::vector<T>)->decltype ();//why am I using decltype? is it to tell the prgram later what thing to return?
	void printQueue(std::vector<T>);//so that you can print the vector after you have modified it
	void splitQueue(std::vector<T> originalCopy, std::vector<T> splitLeft, std::vector<T> splitRight);
};

