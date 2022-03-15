#ifndef GRID_H
#define GRID_H

#include <array>
#include <cstddef>
#include <cmath>


namespace constant
{
    const std::size_t grid_size{9};
    int grid_square_size =  static_cast<int>(std::sqrt(constant::grid_size));
}

class Grid
{
    public:
    using grid_type = std::array<char, constant::grid_size>;
    using grid_index_type = grid_type::size_type;

    private:
    grid_type m_grid;

    public:
    Grid();
    void reset();
    void print() const;
    void set(int, char);
    bool win();  
};
#endif