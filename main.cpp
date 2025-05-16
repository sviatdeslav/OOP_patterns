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
    //1 Продемонстрировать выделение и очищение ресурсов для хранения
    //массива из 10 целых числе с помощью операторов new и delete.
    int* mass1 = new int[10];
    delete[] mass1;
    //2 Продемонстрировать выделение и очищение ресурсов для хранения
    //массива из 10 целых числе с помощью std::unique_ptr.Для создания
    //указателя использовать конструктор и метод std::make_unique.
    std::unique_ptr<int[]> mass2 = std::make_unique<int[]>(10);
    mass2.reset();
    //3 Продемонстрировать выделение и очищение ресурсов для хранения
    //массива из 10 целых числе с помощью std::shared_ptr.Для создания
    //указателя использовать конструктор и метод std::make_shared.
    std::shared_ptr<int> mass3 = std::make_shared<int>(10);
    mass3.reset();
    //4 Создать несколько указателей std::unique_ptr и попытаться связать их с
    //одним и тем же ресурсом в памяти.Обосновать результат.
    int* mass4 = new int(10);
    std::unique_ptr<int[]> mass41(mass4);
    //std::unique_ptr<int[]> mass42(mass4);
    //5 Создать несколько указателей std::shared_ptr и попытаться связать их с
    //одним и тем же ресурсом в памяти.Обосновать результат
    std::shared_ptr<int> mass5 = std::make_shared<int>(10);
    std::weak_ptr<int> mass51(mass5);
    //6 Создать функцию для расчета сумма элементов массива. Входным
    //параметром сделать указатель на массив std::unique_ptr.Проверить
    //состояние указателя(параметр - значения) до и после вызова функции.
    //Обосновать результат.
    std::unique_ptr<int[]> mass6 = std::make_unique<int[]>(10);
    std::cout << mass6 << std::endl;
    for (int i = 0;i < 10;i++) {
        mass6[i] = 9;
    }
    std::cout << mass6 << std::endl;
    summas(std::move(mass6), 10);
    std::cout << mass6 << std::endl;
    //7 Создать функцию для расчета сумма элементов массива. Входным
    //параметром сделать указатель на массив std::shared_ptr.Проверить
    //состояние указателя(параметр - значения) до и после вызова функции.
    //Обосновать результат.
    const size_t size = 10;
    std::shared_ptr<int[]> mass7(new int[10], [](int* p) { delete[] p; });
    std::cout << mass7 << std::endl;
    for (int i = 0;i < 10;i++) {
        mass7.get()[i] = 9;
    }
    summar(mass7, 10);
    std::cout << mass7 << std::endl;
    //8 Продемонстрировать работу умных указателей, применительно к
    //пользовательскому классу(1 - 2 атрибута, 1 - 2 метода, геттеры, сеттеры,
    //конструктор, деструктор)
    std::string name = "Ктото Чтотович";
    int kurs = 3;
    std::shared_ptr<UTSnik> Somebody = std::make_shared<UTSnik>(name, kurs);
    std::cout << "Тестик по ТАУ\n";
}

