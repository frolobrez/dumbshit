#include <iostream>

int getValue()
{
    int input{};
    std::cout<<"introdu un numar: \n";
    std::cin>>input;
    return input;
}

void printDouble(int value)
{
    std::cout<<"dublul numarului este "<<value*2<<'\n';
}

int main()
{
    int x{getValue()};
    printDouble(x);
    return 0;

}