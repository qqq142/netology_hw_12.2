#include <iostream>
#include <fstream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream file("in.txt");
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл!" << std::endl;
        return 1;
    }

    int size;
    file >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        file >> arr[i];
    }
    file.close();

    for (int i = size - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
