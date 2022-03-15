#include "grid.h"
#include <algorithm>
#include <iostream>

Grid::Grid()
{
    std::fill_n(m_grid.begin(),constant::grid_size,'E');
}

void Grid::reset()
{
    std::fill_n(m_grid.begin(),constant::grid_size,'R');
}

void Grid::print() const
{
    int counter{0};

    for(const auto& element : m_grid)
    {
        if ( (counter % constant::grid_square_size) == 0)
        {
            std::cout << '\n';
        }

        std::cout << element << '\t';
        ++counter;
    }
    std::cout << '\n';
}

void Grid::set(int index, char symbol)
{
    m_grid.at(static_cast<grid_index_type>(index - 1)) = symbol;
}

bool Grid::win()
{
    return true;
}

