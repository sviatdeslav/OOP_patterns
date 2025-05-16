#include <iostream>
#include <string>

class UTSnik {
private:
    std::string name;
    int kurs;

public:
    // Конструктор
    UTSnik(std::string Name, int Kurs) {
        name = Name;
        kurs = Kurs;
        std::cout << "Поступление УТСника: " << name << std::endl;
    }

    // Деструктор
    ~UTSnik() {
        std::cout << "Отчисление УТСника: " << name << std::endl;
    }

    // Геттеры
    std::string getName(){
        return name;
    }

    int getKurs() {
        return kurs;
    }

    // Сеттеры
    void setName(std::string newName) {
        name = newName;
    }

    void setKurs(int newKurs) {
        kurs = newKurs;
    }

    // Метод для вывода информации
    void printInfo() const {
        std::cout << "Имя: " << name << ", Курс: " << kurs << std::endl;
    }
};