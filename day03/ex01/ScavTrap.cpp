#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : Name(name), HitPoints(100), maxHitPoints(100),
EnergyPoints(50), maxEnergyPoints(50), level(1), meleeAttackDamage(20), rangedAttackDamage(15),
armorDamageReduction(3) {
	std::cout << name << ": Borderlands: The Pre-Sequel so gooood" << std::endl;
}

ScavTrap::ScavTrap() : Name(), HitPoints(0), maxHitPoints(0),
EnergyPoints(0), maxEnergyPoints(0), level(0), meleeAttackDamage(0),
rangedAttackDamage(0), armorDamageReduction(0) {
	std::cout << "Default constructor FragTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& trap) : Name(trap.Name), HitPoints(trap.HitPoints),
EnergyPoints(trap.EnergyPoints), maxHitPoints(trap.maxHitPoints),
maxEnergyPoints(trap.maxEnergyPoints), level(trap.level), meleeAttackDamage(trap.meleeAttackDamage),
rangedAttackDamage(trap.rangedAttackDamage), armorDamageReduction(trap.armorDamageReduction)
{
	std::cout << "Copy constructor of ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\"Back for more!\"" << std::endl;
}

void ScavTrap::rangedAttack(std::string &target) {
	std::cout << "SC4V-TP " << this->Name << " attacks " << target << " at range, causing "
			  << this->rangedAttackDamage << " points of damage!" << std::endl;
	std::cout << "SC4V-TP " << this->Name << ": \"Snoiped!\"" << std::endl;
}

void ScavTrap::meleeAttack(std::string &target) {
	std::cout << "SC4V-TP " << this->Name << " attacks " << target << " at melee, causing "
			  << this->rangedAttackDamage << " points of damage!" << std::endl;
	std::cout << "SC4V-TP " << this->Name << ": \"Ready for the PUNCHline?!\"" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	amount = (amount < this->armorDamageReduction) ? 0 : amount - this->armorDamageReduction;
	int current = (this->HitPoints < amount) ? 0 : (int)this->HitPoints - (int)amount;
	if (current == 0)
	{
		std::cout << "SC4V-TP " << this->Name << " take " << amount << " damage" << ", health has become |"
				  << "0\\" << this->maxHitPoints << "  SO DEEEAD!" << std::endl;
		std::cout << "SC4V-TP " << this->Name << ": \"Oh. My. God. What if I'm like... a fish? And, if I'm not moving... I stop breathing? AND THEN I'LL DIE! HELP ME! HELP MEEEEE HEE HEE HEEE! HHHHHHHELP!\"" << std::endl;
	}
	else
	{
		this->HitPoints = (unsigned int)current;
		std::cout << "SC4V-TP " << this->Name << " take " << amount << " damage" << ", health has become |"
				  << current << "\\" << this->maxHitPoints << std::endl;
		std::cout << "SC4V-TP " << this->Name << ": \"I'm too pretty to die!\"" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->HitPoints = (amount + this->HitPoints > this->maxHitPoints) ? 100 : amount + this->HitPoints;
	std::cout << "SC4V-TP " << this->Name << " repaired by " << amount << " hp" << ", health has become | "
			  << this->HitPoints << "\\" << this->maxHitPoints << std::endl;
	std::cout << "SC4V-TP " << this->Name << ": \"Health! Eww, what flavor is red?\"" << std::endl;
}

void ScavTrap::challengeNewcomer() {
	std::string chellanges[] = {"Passive Aggressive: Kill 1 enemy while riding as a passenger",
	"Turret Syndrome: Kill 10 enemies with a turret or vehicle mounted weapon",
	"Blue Sparks: Kill 5 enemies while power sliding",
	"Hit-and-Fun: Kill 5 enemies by ramming them with a vehicle",
	"...One Van Leaves - Kill 5 vehicles while in a vehicle",
	"Psst, Hey Buddy...: Trade with 1 other player",
	"Whaddaya Buyin'?: Purchase 2 items with Eridium",
	"Limited-Time Offer: Buy 1 \"Item of the Day\"",
	"Wholesale: Sell 10 items to vending machines",
 	"For the Hoard!: Save $10,000",
 	"Dolla Dolla Bills, Y\'all: Pickup $5,000 from cash drops"};
 	int chell = rand() % 11;
	std::cout << "NEW CHALLANGE FOR SC4V-TP " << this->Name << " " << std::endl;
	std::cout << "**** " << chellanges[chell] << " ****" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &right)
{
	this->HitPoints = right.HitPoints;
	this->maxHitPoints = right.maxHitPoints;
	this->EnergyPoints = right.EnergyPoints;
	this->maxEnergyPoints = right.maxEnergyPoints;
	this->level = right.level;
	this->Name = right.Name;
	this->meleeAttackDamage = right.meleeAttackDamage;
	this->rangedAttackDamage = right.rangedAttackDamage;
	this->armorDamageReduction = right.armorDamageReduction;
	return *this;
}