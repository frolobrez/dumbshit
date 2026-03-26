#include <iostream>

#define PRINT_JOE

int main()
{
    #ifdef PRINT_JOE //daca joe e definit va printa gen type shit
        std::cout<<"Joe\n";
    #endif

    #ifdef PRINT_BOOBERTON //nu printeste nimic ca nu e definit
        std::cout<<"Booberton\n";
    #endif

    return 0;
}