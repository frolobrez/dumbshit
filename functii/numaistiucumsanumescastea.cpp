#include <iostream>

void printValue(int x)
{
    std::cout<<x<<'\n';
}

void adunare(int x, int y)
{
    std::cout<<x+y<<'\n';
}

int main()
{
    printValue(6);
    adunare(1, 4);
    return 0;
}
