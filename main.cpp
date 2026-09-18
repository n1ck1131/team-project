// Командный проект. Группа ПИ-51
// Команда: Лазарев (вариант 43, техлид), 2 человек (вариант 17, разработчик).
#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;



int main() {
    SetConsoleOutputCP(CP_UTF8); 
    int choice;
    do {
        cout << "\nКомандный проект: сборник расчётов\n";
        cout << "0 - Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}