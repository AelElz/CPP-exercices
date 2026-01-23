#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Correct Polymorphism" << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType()  << std::endl;
	std::cout << cat->getType() << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << "\nWrong Polymorphism" << std::endl;
	const WrongAnimal* wrong = new WrongCat();

	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();

	delete wrong;

	return (0);
}
