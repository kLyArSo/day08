#ifndef _easyfind_hpp
#define _easyfind_hpp
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

class ElementNotFoundException : public std::exception
{
    public:
        virtual const char *what() const throw(){return ("ElementNotFoundException!");}
};

template  <typename T>
void    easy_find(const T& obj, int arg)
{
    typename T::const_iterator it = find(obj.begin(), obj.end(), arg);
    if (it == obj.end()) // element not found
        throw (ElementNotFoundException());
    else
        std::cout << "Element Found !" << std::endl << *it << std::endl;
}
#endif