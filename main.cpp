#include <iostream>
#include "UTSnik.h"

int summas(std::unique_ptr<int[]> arr, int size) {
    int sum = 0;
    for (int i = 0;i < size;i++) {
        sum += arr[i];
    }
    return sum;
}

int summar(std::shared_ptr<int[]> arr, int size) {
    int sum = 0;
    for (int i = 0;i < size;i++) {
        sum += arr.get()[i];
    }
    return sum;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    //1 ������������������ ��������� � �������� �������� ��� ��������
    //������� �� 10 ����� ����� � ������� ���������� new � delete.
    int* mass1 = new int[10];
    delete[] mass1;
    //2 ������������������ ��������� � �������� �������� ��� ��������
    //������� �� 10 ����� ����� � ������� std::unique_ptr.��� ��������
    //��������� ������������ ����������� � ����� std::make_unique.
    std::unique_ptr<int[]> mass2 = std::make_unique<int[]>(10);
    mass2.reset();
    //3 ������������������ ��������� � �������� �������� ��� ��������
    //������� �� 10 ����� ����� � ������� std::shared_ptr.��� ��������
    //��������� ������������ ����������� � ����� std::make_shared.
    std::shared_ptr<int> mass3 = std::make_shared<int>(10);
    mass3.reset();
    //4 ������� ��������� ���������� std::unique_ptr � ���������� ������� �� �
    //����� � ��� �� �������� � ������.���������� ���������.
    int* mass4 = new int(10);
    std::unique_ptr<int[]> mass41(mass4);
    //std::unique_ptr<int[]> mass42(mass4);
    //5 ������� ��������� ���������� std::shared_ptr � ���������� ������� �� �
    //����� � ��� �� �������� � ������.���������� ���������
    std::shared_ptr<int> mass5 = std::make_shared<int>(10);
    std::weak_ptr<int> mass51(mass5);
    //6 ������� ������� ��� ������� ����� ��������� �������. �������
    //���������� ������� ��������� �� ������ std::unique_ptr.���������
    //��������� ���������(�������� - ��������) �� � ����� ������ �������.
    //���������� ���������.
    std::unique_ptr<int[]> mass6 = std::make_unique<int[]>(10);
    std::cout << mass6 << std::endl;
    for (int i = 0;i < 10;i++) {
        mass6[i] = 9;
    }
    std::cout << mass6 << std::endl;
    summas(std::move(mass6), 10);
    std::cout << mass6 << std::endl;
    //7 ������� ������� ��� ������� ����� ��������� �������. �������
    //���������� ������� ��������� �� ������ std::shared_ptr.���������
    //��������� ���������(�������� - ��������) �� � ����� ������ �������.
    //���������� ���������.
    const size_t size = 10;
    std::shared_ptr<int[]> mass7(new int[10], [](int* p) { delete[] p; });
    std::cout << mass7 << std::endl;
    for (int i = 0;i < 10;i++) {
        mass7.get()[i] = 9;
    }
    summar(mass7, 10);
    std::cout << mass7 << std::endl;
    //8 ������������������ ������ ����� ����������, ������������� �
    //����������������� ������(1 - 2 ��������, 1 - 2 ������, �������, �������,
    //�����������, ����������)
    std::string name = "����� ��������";
    int kurs = 3;
    std::shared_ptr<UTSnik> Somebody = std::make_shared<UTSnik>(name, kurs);
    std::cout << "������ �� ���\n";
}

