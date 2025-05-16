#include <iostream>
#include <string>

class UTSnik {
private:
    std::string name;
    int kurs;

public:
    // �����������
    UTSnik(std::string Name, int Kurs) {
        name = Name;
        kurs = Kurs;
        std::cout << "����������� �������: " << name << std::endl;
    }

    // ����������
    ~UTSnik() {
        std::cout << "���������� �������: " << name << std::endl;
    }

    // �������
    std::string getName(){
        return name;
    }

    int getKurs() {
        return kurs;
    }

    // �������
    void setName(std::string newName) {
        name = newName;
    }

    void setKurs(int newKurs) {
        kurs = newKurs;
    }

    // ����� ��� ������ ����������
    void printInfo() const {
        std::cout << "���: " << name << ", ����: " << kurs << std::endl;
    }
};