#include "Zombie.hpp"

int main() {
    Zombie* heapZombie = newZombie("HeapZ");
    heapZombie->announce();
    delete heapZombie;

    randomChump("StackZ");

    return 0;
}
