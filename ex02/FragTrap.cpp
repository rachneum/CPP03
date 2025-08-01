#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
	std::cout << "FragTrap contructor called." << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
	std::cout << "FragTrap constructor Name called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if ((_hitPoints > 0) && (_energyPoints > 0))
	{
		_energyPoints--;
		std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap" << getName() << " doesn't have enough HitPoints or/and EnergyPoints to attack!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
