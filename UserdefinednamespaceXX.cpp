#include<iostream>

namespace Marvellous
{
    int no = 11;

    void fun()
    {
        std::cout<<"Marvellous\n";
    }
}

using namespace Marvellous;

int main()
{
    std::cout<<"Jay Ganesh...\n";

    Marvellous::fun();

    return 0;
}