#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int randomNumbers[10];
    int userNumbers[10];

    for (int i = 0; i < 10; ++i) {
        randomNumbers[i] = rand() % 11; 
    }

    cout << "Введите 10 чисел от 0 до 10:\n";
    for (int i = 0; i < 10; ++i) {
        do {
            cout << "Число " << i + 1 << ": ";
            cin >> userNumbers[i];
            if (userNumbers[i] < 0 || userNumbers[i] > 10) {
                cout << "Неверное число. Введите число от 0 до 10.\n";
            }
        } while (userNumbers[i] < 0 || userNumbers[i] > 10);
    }

    cout << "\nРезультаты:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Ячейка " << i + 1 << ": ";
        cout << "Случайное число: " << randomNumbers[i] << ", ";
        cout << "Ваше число: " << userNumbers[i] << ". ";
        if (randomNumbers[i] == userNumbers[i]) {
            cout << "Попали\n";
        }
        else {
            cout << "Не попали.\n";
        }
    }

    return 0;
}

