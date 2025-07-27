#ifndef  SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& rhs);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();//Fonction qui va afficher message disant "ScavTrap is now in Gatekeeper mode."
};		

#endif