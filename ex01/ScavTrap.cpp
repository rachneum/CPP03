#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()//Appeler le constructeur de base sinon les membres herites ne seront pas initialses correctement.
{//(en gros, je lui dit de construire ClapTrap avant de construire ScavTrap).
	hitPoints = 100;
    energyPoints = 50;
    attackDam = 20;
	std::cout << "ScavTrap contructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	hitPoints = 100;
    energyPoints = 50;
    attackDam = 20;
	std::cout << "ScavTrap constructor Name called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);//Appel explicite a l'operateur = de ClapTrap.
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if ((hitPoints > 0) && (energyPoints > 0))
	{
		energyPoints--;
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << attackDam << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap" << getName() << " doesn't have enough HitPoints or/and EnergyPoints to attack!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}