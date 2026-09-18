// Командный проект. Группа ПИ-51
// Команда: Лазарев (вариант 43, техлид), 2 человек (вариант 17, разработчик).

#include <iostream>
#include <locale.h>
#include <windows.h>
#include "student2.h"
using namespace std;



int main() {
    SetConsoleOutputCP(CP_UTF8); 
    int choice;
    do {
        cout << "\nКомандный проект: сборник расчётов\n";
        cout << "1. Площадь сектора\n";
        cout << "2. Длина дуги\n";
        cout << "0 - Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "Работа завершена.\n";
                break;
            case 1: {
                double r, alpha;
                cout << "Введите радиус r и угол alpha (в градусах): ";
                cin >> r >> alpha;
                if (r < 0) {
                    cout << "Ошибка: радиус не может быть отрицательным.\n";
                } else {
                    cout << "Площадь сектора = " << sectorArea(r, alpha) << "\n";
                }
                break;
            }
            case 2: {
                double r, alpha;
                cout << "Введите радиус r и угол alpha (в градусах): ";
                cin >> r >> alpha;
                if (r < 0) {
                    cout << "Ошибка: радиус не может быть отрицательным.\n";
               } else {
                    cout << "Длина дуги = " << arcLength(r, alpha) << "\n";
            }
            break;
            }
            default:
                cout << "Такого пункта нет.\n";
            }
    } while (choice != 0);
    return 0;
}
