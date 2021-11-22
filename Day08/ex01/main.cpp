#include "Span.hpp"

int main()
{
    Span sp = Span(10000);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::vector<int>& temp = sp.get_vec();

    temp.insert(find(temp.begin(), temp.end() - 1, 5), 1999, 12);
    temp.insert(find(temp.begin(), temp.end(), 3), 1999, 55);
    temp.insert(find(temp.begin(), temp.end(), 17), 1999, 75);
    temp.insert(find(temp.begin(), temp.end(), 9), 1999, 3);
    temp.insert(find(temp.begin(), temp.end(), 11), 1999, 88);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}