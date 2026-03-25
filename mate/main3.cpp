#include <iostream>

int main()
{
    [[maybe_unused]] int a {56};
    [[maybe_unused]] double pi {3.14159}; // [[maybe_unused]] lets you keep unused variables without the compiler going batshit
    std::cout<<pi;
    return 0;
}