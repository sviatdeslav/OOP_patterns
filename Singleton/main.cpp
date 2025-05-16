#include<iostream>
#include "God.h"

int main() {
	// Обычный указатель
	/*setlocale(LC_ALL, "Russian");
	God::Instance()->setName("Макаронный монстр");
	God::Instance()->setAge(99999999);
	std::cout << "Информация о Божестве" << std::endl;
	std::cout << "Имя " << God::Instance() -> getName() << std::endl;
	std::cout << "Возраст " << God::Instance()->getAge() << std::endl;
	// God* secondgod = new God(); // Невозможно создать второй объект
	*/
	// Умный указатель
	setlocale(LC_ALL, "Russian");
	std::shared_ptr<God>& god = God::Instance();
	god->setName("Макаронный монстр");
	god->setAge(99999999);
	std::cout << "Информация о Божестве" << std::endl;
	std::cout << "Имя " << god->getName() << std::endl;
	std::cout << "Возраст " << god->getAge() << std::endl;
	std::shared_ptr<God>& secondgod = God::Instance();
	secondgod->setName("Летающий макаронный монстр");
	secondgod->setAge(66666666);
	std::cout << "Информация о Божестве 1" << std::endl;
	std::cout << "Имя " << god->getName() << std::endl;
	std::cout << "Возраст " << god->getAge() << std::endl;
	std::cout << "Информация о Божестве 2" << std::endl;
	std::cout << "Имя " << secondgod->getName() << std::endl;
	std::cout << "Возраст " << secondgod->getAge() << std::endl;

}
