#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) :
ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3) {
	std::cout << name << ": Borderlands: The Pre-Sequel so gooood" << std::endl;
};

ScavTrap::~ScavTrap() {
	std::cout << "\"Back for more!\"" << std::endl;
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
 	int chell = std::rand() % 11;
	std::cout << "NEW CHALLANGE FOR SC4V-TP " << this->Name << " " << std::endl;
	std::cout << "**** " << chellanges[chell] << " ****" << std::endl;
}

std::string ScavTrap::_announcePrefix()  {
	return "SC4V-TP ";
}