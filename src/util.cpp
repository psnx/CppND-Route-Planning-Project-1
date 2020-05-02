#include <iostream>
#include <string>
#include <climits>
#include "util.h"

int util::getIntUserInput(bool predicate (int))
{
    while (true)
    {
        std::cout << "Enter a value";
        int x;
        std::cin >> x;
        
        if (! std::cin.fail()  && predicate(x))
        {
            std::cin.ignore(INT_MAX,'\n'); 
            return x;
           
        }
        std::cin.clear(); 
        std::cin.ignore(INT_MAX,'\n');
        std::cout << "Invalid input.\n";
    }
}