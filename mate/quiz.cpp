#include <iostream>

int main()
{
    int x{};
    int y{};
    std::cout<<"introdu un numar: "<<'\n';
    std::cin>>x; 
    
    std::cout<<"introdu un alt numar: "<<'\n';
    std::cin>>y;

    std::cout<<x<<"+"<<y<<" este "<<x+y<<".\n";
    std::cout<<x<<"-"<<y<<" este "<<x-y<<".\n";
    return 0;
}