#include <iostream>
#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony stackPony;
	stackPony.setWeight("200");
	stackPony.setColor("BLUE");
	stackPony.setNickname("Stacky");
}

void ponyOnTheHeap(Pony *&addressPony)
{
	Pony *heapPony = new Pony();
	heapPony->setNickname("Hippy");
	heapPony->setColor("RED");
	heapPony->setWeight("100");
	addressPony = heapPony;
}

int main(int argc, char **argv) {
	Pony *tmpPony;
	ponyOnTheHeap(tmpPony);
	ponyOnTheStack();
	delete tmpPony;
	if (argv[1] || argc > 1)
		for (bool flag = true;;)
		{
			if (flag)
			{
				std::system("leaks pony");
				flag = false;
			}
		}
	return 0;
}
