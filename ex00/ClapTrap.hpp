#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;//Points de vie.
		int			_energyPoints;//Endurance.
		int			_attackDamage;//Pouvoir de degat.

	public:
		ClapTrap();
		ClapTrap(const std::string	Name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& rhs);
		~ClapTrap();
		std::string	getName() const;
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif