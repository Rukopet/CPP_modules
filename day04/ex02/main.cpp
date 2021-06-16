#include <iostream>

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
	ISpaceMarine *vasya = new TacticalMarine;
	ISpaceMarine *petya = new TacticalMarine;
	ISpaceMarine *joe = new TacticalMarine;
	Squad *kek = new Squad;
	kek->push(vasya);
	kek->push(petya);
	kek->push(joe);

	ISpaceMarine *yarik = new AssaultTerminator;
	ISpaceMarine *serega = new AssaultTerminator;
	ISpaceMarine *diman = new AssaultTerminator;
	kek->push(yarik);
	kek->push(serega);
	kek->push(diman);
	delete kek;

	Squad *wow = new Squad;
	ISpaceMarine *pec = new AssaultTerminator;
	ISpaceMarine *keker = new AssaultTerminator;
	ISpaceMarine *molodcik = new AssaultTerminator;
	wow->push(pec);
	wow->push(keker);
	wow->push(molodcik);
	delete wow;

	return 0;
}
