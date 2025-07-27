#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	private:
		std::string	_Name;
		int			HitPoints = 10;//Points de vie.
		int			EnergyPoints = 10;//Endurance.
		int			AttackDam = 0;//Pouvoir de degat.
	public:
		ClapTrap();
		ClapTrap(const std::string	Name);
		ClapTrap(const ClapTrap& other);//Constructeur de copy.
		ClapTrap& operator=(const ClapTrap &rhs);
		~ClapTrap();
		std::string	getName() const;
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif