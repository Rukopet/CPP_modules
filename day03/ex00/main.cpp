#include "FragTrap.hpp"

int main() {
	std::string name = "rofl", chosen = "Chosen one";
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
}
