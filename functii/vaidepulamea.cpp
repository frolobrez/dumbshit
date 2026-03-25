#include <iostream>

int inmultire(int z, int w)
{
    return z*w;
}

int adunare(int x, int y)
{
    return x+y;
}

int main()
{
    std::cout<<adunare(1+2, 3*17)<<'\n';
    std::cout<<inmultire(2+4, 4+5)<<'\n';
    
    int p{5};
    std::cout<<adunare(p, p)<<'\n';

    std::cout<<adunare(11, inmultire(3, 4))<<'\n';
    std::cout<<inmultire(2, adunare(23, 10))<<'\n';
    return 0;
}