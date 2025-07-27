#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Mimi Kai");
	ClapTrap	b("Younes");

	a.attack(b.getName());
	b.takeDamage(5);
}
