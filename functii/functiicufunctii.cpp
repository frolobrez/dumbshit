#include <iostream>

void doA()
{
    std::cout<<"functie aaaaaa :( \n";
}

void doB()
{
    std::cout<<"functie bbbbb :) \n";
    doA();
}

int main()
{
    std::cout<<"incepe functia aaaaa\n";
    doA();
    std::cout<<"incepe functia bbbbb (care functioneaza functia a)\n";
    doB();
    std::cout<<"atat a fost cu functiile azi copcii\n";
    return 0;
}