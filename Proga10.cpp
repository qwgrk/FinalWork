#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int a1; //Изменена переменная
    int b;
    int c;

    cout << "Введите 3 числа: ";
    cin >> a >> b >> c;

    ofstream file("numbers.txt"); // открытие файла для записи

    if (file.is_open()) {
        file << "a = " << a << endl;
        file << "b = " << b << endl;
        file << "c = " << c << endl;

        if (a > 0) { // проверка первой переменной
            file << "Первая переменная положительная" << endl;
        } else {
            file << "Первая переменная не положительная" << endl;
        }

        file.close();
        cout << "Данные записаны в файл numbers.txt" << endl;
    } else {
        cout << "Ошибка открытия файла!" << endl;
    }

    return 0;
}