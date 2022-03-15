#include "grid.h"
#include <iostream>
int main()
{
    Grid grid{};
    grid.print();
    grid.reset();
    grid.print();
    std::cout << "This is a test\n";
    return 0;
};