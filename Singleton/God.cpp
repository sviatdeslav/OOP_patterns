#include"God.h"

// God* God::_pInstance = nullptr; // Обычный указатель
std::shared_ptr<God> God::_pInstance = nullptr; // Умный указатель


//God* God::Instance() { // Обычный указатель
std::shared_ptr<God>& God::Instance() { // Умный указатель
	if (_pInstance == nullptr)
		//_pInstance = new God(); // Обычный указатель
		_pInstance = std::shared_ptr<God> (new God()); // Умный указатель
	return _pInstance;
}

God::God() {
	_pInstance = nullptr;
	_Name = "";
	_Age = 0;
}

std::string God::getName() {
	return _Name;
}

int God::getAge() {
	return _Age;
}

void God::setName(std::string name) {
	_Name = name;
}
void God::setAge(int age) {
	_Age = age;
}
