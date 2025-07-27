#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav1;
    std::cout << "scav1 name: " << scav1.getName() << std::endl;

    ScavTrap scav2("Bob");
    std::cout << "scav2 name: " << scav2.getName() << std::endl;

    ScavTrap scav3(scav2);
    std::cout << "scav3 (copy of scav2) name: " << scav3.getName() << std::endl;

    scav1 = scav3;
    std::cout << "scav1 after assignment from scav3 name: " << scav1.getName() << std::endl;

    scav1.attack("Enemy");
    scav2.takeDamage(15);
    scav3.beRepaired(10);

    scav1.guardGate();

    return 0;
}
