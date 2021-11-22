#include "easyfind.hpp"

int     main()
{
    {
        std::cout << "----------------------VECTOR-------------------\n";
        std::vector<int> vec_container;
        vec_container.push_back(55);
        vec_container.push_back(46);
        vec_container.push_back(82);
        vec_container.push_back(73);
        vec_container.push_back(96);
        vec_container.push_back(11);
        try
        {
            easy_find(vec_container, 73);
            easy_find(vec_container, 82);
            easy_find(vec_container, 96);
            easy_find(vec_container, 11);
            easy_find(vec_container, 12);

        }
        catch(std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "------------------------------------------------" << std::endl;
    }
    {
        std::cout << "----------------------LIST-------------------\n";
        std::list<int> list_container;
        list_container.push_back(44);
        list_container.push_back(82);
        list_container.push_back(53);
        list_container.push_back(85);
        list_container.push_back(28);
        list_container.push_back(67);
        try
        {
            easy_find(list_container, 85);
            easy_find(list_container, 44);
            easy_find(list_container, 53);
            easy_find(list_container, 28);
            easy_find(list_container, 29);

        }
        catch(std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "------------------------------------------------" << std::endl;
    }
}