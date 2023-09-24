
#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie* res = new Zombie[N];
    int i = 0;
    while (i < N)
        res[i++] = Zombie(name);
    return (res);
}