#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *hord = zombieHorde(N, "zomobie");
    for (int i = 0; i < N; i++)
        hord[i].announce();
    delete[]hord;
    return 0;
}
