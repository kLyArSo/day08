#ifndef _SPAN_HPP
#define _SPAN_HPP
#include <vector>
#include <iostream>
class VectorFullException : public std::exception
{
    public:
        virtual const char *what() const throw();
};

class NoSpanException : public std::exception
{
    public:
        virtual const char *what() const throw();
};

class Span
{
    private:
        std::vector<int> vec_container;
        unsigned int N;
    public:
        Span();
        Span(const Span&);
        void    operator=(const Span&);
        ~Span();

        Span(unsigned int N);
        void    addNumber(int number);
        uint    shortestSpan();
        uint    longestSpan();
        std::vector<int>&    get_vec();
        void    print_vector();
};

#endif