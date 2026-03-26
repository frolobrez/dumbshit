#include <iostream>

void doSomething()
{
    #ifdef PRINT
    std::cout<<"hai la spritz"<<'\n';
    #endif
    
    #ifndef PRINT
    std::cout<<"nu veni la spritz"<<'\n';
    #endif
}