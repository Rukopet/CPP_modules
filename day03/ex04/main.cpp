#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main() {
	std::string name = "rofl", chosen = "Chosen one", oki = "NewBie";
	std::string targetName[8] = {"Skag", "Rocket Turret", "Corpse Eater", "Wereskag", "Tankenstein"
			, "Drifter", "Rakk", "Crab worm larvae"};
	FragTrap one("Chosen one");
	FragTrap two("Chosen two");
	one.rangedAttack(name);
	one.meleeAttack(name);

	two.rangedAttack(chosen);
	one.takeDamage(two.getRangedAttackDamage());
	one.beRepaired(5);

	one.vaulthunter_dot_exe(targetName[3]);
	one.vaulthunter_dot_exe(targetName[4]);
	one.vaulthunter_dot_exe(targetName[5]);
	one.vaulthunter_dot_exe(targetName[6]);
	one.vaulthunter_dot_exe(targetName[6]);

	ScavTrap Cv("NewBie");
	Cv.rangedAttack(targetName[7]);
	Cv.meleeAttack(targetName[4]);

	two.rangedAttack(oki);
	Cv.takeDamage(two.getRangedAttackDamage());
	Cv.beRepaired(3);
	Cv.challengeNewcomer();
	ClapTrap ork("ork");
	NinjaTrap Ninja("Hokage");
	Ninja.ninjaShoebox(ork);
	Ninja.ninjaShoebox(one);
	Ninja.ninjaShoebox(Cv);
	Ninja.ninjaShoebox(Ninja);
	std::cout << Ninja.getLevel() << std::endl;

	SuperTrap SUP("SUPER");
	SUP.vaulthunter_dot_exe(Ninja.getName());
	SUP.ninjaShoebox(Cv);
}
