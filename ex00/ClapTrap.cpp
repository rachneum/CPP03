#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string Name) : _Name(Name)
{
	std::cout << "Constructor Name called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "Copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		_Name = rhs._Name;
		HitPoints = rhs.HitPoints;
		EnergyPoints = rhs.EnergyPoints;
		AttackDam = rhs.AttackDam;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if ((HitPoints > 0) && (EnergyPoints > 0))
	{
		std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << AttackDam << " points of damage!" << std::endl;
		EnergyPoints - 1;
	}
	else
		std::cout << "ClapTrap" << _Name << " doesn't have enough HitPoints or/and EnergyPoints to attack!" << std::endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	HitPoints -= amount;
	std::cout << "ClapTrap " << _Name << " took " << amount << " points of damage!" << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((HitPoints > 0) && (EnergyPoints > 0))
	{
		std::cout << "ClapTrap " << _Name << " regained " << amount << " points of HitPoints and lost 1 Energy Point!" << std::endl;
		EnergyPoints - 1;
		HitPoints += amount;
	}
	else
		std::cout << "ClapTrap" << _Name << " doesn't have enough HitPoints or/and EnergyPoints to be repaired!" << std::endl;	

}

std::string	ClapTrap::getName() const
{
	return	(_Name);
}
