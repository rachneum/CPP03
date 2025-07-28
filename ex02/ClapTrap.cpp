#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name)
{
	std::cout << "ClapTrap constructor Name called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		hitPoints = rhs.hitPoints;
		energyPoints = rhs.energyPoints;
		attackDam = rhs.attackDam;
	}
	std::cout << "ClapTrap copy assignment operator called." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if ((hitPoints > 0) && (energyPoints > 0))
	{
		energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << attackDam << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap" << _name << " doesn't have enough HitPoints or/and EnergyPoints to attack!" << std::endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((hitPoints > 0) && (energyPoints > 0))
	{
		std::cout << "ClapTrap " << _name << " regained " << amount << " points of HitPoints and lost 1 Energy Point!" << std::endl;
		energyPoints--;
		hitPoints += amount;
	}
	else
		std::cout << "ClapTrap" << _name << " doesn't have enough HitPoints or/and EnergyPoints to be repaired!" << std::endl;	

}

std::string	ClapTrap::getName() const
{
	return	(_name);
}