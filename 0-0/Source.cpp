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

    cout << "������� 10 ����� �� 0 �� 10:\n";
    for (int i = 0; i < 10; ++i) {
        do {
            cout << "����� " << i + 1 << ": ";
            cin >> userNumbers[i];
            if (userNumbers[i] < 0 || userNumbers[i] > 10) {
                cout << "�������� �����. ������� ����� �� 0 �� 10.\n";
            }
        } while (userNumbers[i] < 0 || userNumbers[i] > 10);
    }

    cout << "\n����������:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "������ " << i + 1 << ": ";
        cout << "��������� �����: " << randomNumbers[i] << ", ";
        cout << "���� �����: " << userNumbers[i] << ". ";
        if (randomNumbers[i] == userNumbers[i]) {
            cout << "������\n";
        }
        else {
            cout << "�� ������.\n";
        }
    }

    return 0;
}

