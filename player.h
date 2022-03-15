#ifndef PLAYER_H
#define PLAYER_H

#include "grid.h"
#include <array>

class Player
{
    public:
    using player_type = std::array<int,constant::grid_size>;
    using player_index_type = player_type::size_type;

    private:
    player_type m_moves{};

    public:
    Player();
    void move(int, Grid);
    void print();
};

#endif
