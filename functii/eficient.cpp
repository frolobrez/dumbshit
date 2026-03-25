#include <iostream>

 int getValue()
 {
    std::cout<<"introdu o valoare type shit\n";
    int input;
    std::cin>>input;
    return input;
 }

 int main()
 {
    int x{getValue()};
    int y{getValue()};
    std::cout<<x<<"+"<<y<<"="<<x+y<<'\n';
    return 0;
 }