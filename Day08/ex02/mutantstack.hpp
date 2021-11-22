#include <iostream>
#include <stack>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T>
{
    private:
        ;
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack(){};
        MutantStack(const MutantStack& othr){*this = *othr;}
        void    operator=(const MutantStack& othr){this->c = othr.c;}
        ~MutantStack(){}

        iterator end(){return (this->c.end());}
        iterator begin(){return (this->c.begin());}
};