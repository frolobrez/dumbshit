#include <iostream>

int adunare(int x, int y);

int main()
{
    std::cout<<"suma adunarii 3+6 este "<<adunare(3, 6)<<'\n';
    return 0;
}

int adunare(int x, int y)
{
    return x+y;
}