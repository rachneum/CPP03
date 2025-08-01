#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called." << std::endl;
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
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
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
	if ((_hitPoints > 0) && (_energyPoints > 0))
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap" << _name << " doesn't have enough HitPoints or/and EnergyPoints to attack!" << std::endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already at 0 hit points and can't take more damage!" << std::endl;
		return;
	}
	if ((int)amount >= _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;  
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints > 0) && (_energyPoints > 0))
	{
		std::cout << "ClapTrap " << _name << " regained " << amount << " points of HitPoints and lost 1 Energy Point!" << std::endl;
		_energyPoints--;
		_hitPoints += amount;
	}
	else
		std::cout << "ClapTrap" << _name << " doesn't have enough HitPoints or/and EnergyPoints to be repaired!" << std::endl;	

}

std::string	ClapTrap::getName() const
{
	return	(_name);
}