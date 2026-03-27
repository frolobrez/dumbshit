#include <iostream>

#define LABA

void faLaba()
{
    std::cout<<"mama ce laba buna am facut"<<'\n';
}

int

{
    #ifdef LABA
        faLaba();
    #else
        std::cout<<"nu am dat laba ca m-au oprit evreii"<<'\n';
    #endif
    return 0;
}
