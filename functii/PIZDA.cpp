#include <iostream>

int doubleNumber(int x)
{
return x*2;
}

int main()
{
    int x{};
    std::cout<<"introdu un numar"<<'\n';
    std::cin>>x;
    std::cout<<"dublul numarului este "<<doubleNumber(x)<<'\n';
    return 0;
}