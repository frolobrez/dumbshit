#include <iostream>

/*int returnFive() //program de exemplu
{
    return 5; //returns 5 to caller, in this case main
}

int main()
{
    std::cout<<returnFive()<<'\n'; //prints 5
    std::cout<<returnFive()+2<<'\n';//prints 7
    return 0;
}*/

int getValue()
{
    std::cout<<"introdu o valoare fa \n"; //cere valoarea, destul de logic
    int input;
    std::cin>>input;
    return input; //returneste valoarea
}

int main()
{
    int x{getValue()};
    std::cout<<x<<" dublat este "<<x*2<<'\n';
    return 0;
}