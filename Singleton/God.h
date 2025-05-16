#pragma once
#include <string>
#include<memory>

class God {
public:
	//static God* Instance(); // Обычный указатель
	static std::shared_ptr<God> &Instance(); // Умный указатель
	std::string getName();
	int getAge();
	void setName(std::string name);
	void setAge(int age);
protected:
	God();
private:
	//static God* _pInstance; // Обычный указатель
	static std::shared_ptr<God> _pInstance; // Умный указатель
	std::string _Name;
	int _Age;
};
