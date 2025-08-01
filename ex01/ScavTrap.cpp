#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()//Appeler le constructeur de base sinon les membres herites ne seront pas initialses correctement.
{//(en gros, je lui dit de construire ClapTrap avant de construire ScavTrap).
	_hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
	std::cout << "ScavTrap contructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
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
	if ((_hitPoints > 0) && (_energyPoints > 0))
	{
		_energyPoints--;
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << getName() << " doesn't have enough HitPoints or/and EnergyPoints to attack!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}
