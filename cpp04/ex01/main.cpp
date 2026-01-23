#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "=== Simple delete test ===" << std::endl;
	Animal *a1 = new Dog();
	Animal *a2 = new Cat();

	delete a1;
	delete a2;

	std::cout << "\n=== Animal array test ===" << std::endl;
	Animal *animals[4];

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "\n=== Deep copy test ===" << std::endl;
	Dog dog1;
	dog1.getBrain()->ideas[0] = "Eat";

	Dog dog2(dog1); // copy

	dog2.getBrain()->ideas[0] = "Sleep";

	std::cout << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << dog2.getBrain()->ideas[0] << std::endl;

	return (0);
}
