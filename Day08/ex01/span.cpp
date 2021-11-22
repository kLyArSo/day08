#include "Span.hpp"
const char* VectorFullException::what() const throw()
{
    return ("VectorFullException !");
}
const char* NoSpanException::what() const throw()
{
    return ("NoSpanException !");
}
Span::Span()
{
    ;
}

Span::Span(const Span& othr)
{
    (*this) = (othr);
}

void    Span::operator=(const Span& othr)
{
    this->vec_container = othr.vec_container;
    this->N = othr.N;
}

Span::~Span()
{
}

Span::Span(unsigned int N) : N(N)
{
    vec_container.reserve(N);
}

void    Span::addNumber(int number)
{
    if (vec_container.max_size() == vec_container.size())
        throw(VectorFullException());
    else
        vec_container.push_back(number);
}

uint     Span::shortestSpan()
{
    uint no_sum;
    if (vec_container.size() == 0 || vec_container.size() == 1)
        throw(NoSpanException());
    sort(vec_container.begin(), vec_container.end());
    std::vector<int>::iterator it = vec_container.begin();
    no_sum = *(it + 1) - *it;
    while(it + 1 != vec_container.end())
    {
        if (no_sum > (unsigned int)(*(it + 1) - *it))
            no_sum = *(it + 1) - *it;
        it++;
    }
    return (no_sum);
}

uint    Span::longestSpan()
{
    if (vec_container.size() == 0 || vec_container.size() == 1)
        throw(NoSpanException());
    sort(vec_container.begin(), vec_container.end());
    return (*(vec_container.end() - 1) - *vec_container.begin());
}

std::vector<int>&    Span::get_vec()
{
    return (this->vec_container);
}

void    Span::print_vector()
{
    std::vector<int>::iterator it  = vec_container.begin();

    while(it != vec_container.end())
    {
        std::cout << *it << " ,";
        it++;
    }
    std::cout << std::endl;
}