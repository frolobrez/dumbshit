#include <iostream>

int main()
{
    std::cout<<"introdu un numar coi" << '\n';
    int x{};
    int y{};
    int z{};
    std::cin>>x>>y>>z; // gives x,y,z a value
    std::cout<<"ai introdus numerele " << x <<", " << y << " si " << z << "\n"; // outputs value of x,y,z
    return 0;
}