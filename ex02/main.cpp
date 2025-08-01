#include "FragTrap.hpp"

int main()
{
    FragTrap frag1("Fraggy");
    frag1.attack("Enemy");
    frag1.highFivesGuys();

    FragTrap frag2(frag1);
    frag2.beRepaired(20);

    frag1.takeDamage(50);

    frag2 = frag1;

    return 0;
}
