#include "Template.h"



template<typename T>
Template<T>::Template()
{
	std::cout << "An object of class 'Template' has been created" + "/n";
}

template<typename T>
Template<T>::~Template()
{
}


template<typename T> // must I write this line at every function because we declare we are working with templates?
void Template<T>::_get(std::vector<T> elements)
{
	//rest of function
}

template<typename T>
void Template<T>::_put(std::vector<T> elements)
{
	//rest of function
}

template<typename T>
int Template<T>::_size(std::vector<T> elements)
{
	std::cout << count(elements.begin(), elements.end()) << std::endl; //still needs testing
}



template<typename T>
void Template<T>::sort(std::vector<T>)
{
	std::cout << "Sorting!" << std::endl;
}
