#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

// Проверка введёного числа
bool proverka(std::string& str){
	int sizeStr = str.size();
	bool strSpace = true;
	int tocka = 0;
	int simvol = 0;
	for (int i = 0; i < sizeStr; i++){ // Проходимся по каждому элементу строки
		if(isdigit(str[i])) {
			simvol++; // Находим цифры
		}
		if(str[i] == '.') { // Находим колличество точек
			tocka++;
		}
	}
	if((simvol + tocka == sizeStr) && (tocka <= 1)){ // Проверяем, чтобы количество цифр + количсетво точек и количество элементов. Также проверяется количество . 
		return true;
	} else {
		return false;
	}
}

// Функция для ввода числа
double vvodChisla(const string& prompt) {
    std::string input;
    while (true) {
        cout << prompt;
        getline(cin, input);

        if (proverka(input)) { // Проверяем строку
            return stod(input); // Преобразуем строку в число
        } else {
            cout << "Неверное значение. Пожалуйста, введите целое число." << std::endl;
        }
    }
}

double Visota(double& a, double& b, double& c, double& d){
	double l = abs(a-b) / 2;
	if (c > l && d > l){
		double h1 = sqrt(c*c - l * l);
		double h2 = sqrt(d*d - l * l);
		double h = (h1 + h2) / 2;
		return h;
	}else {
	cout << "Такой трапеции не существует." << endl;
	return 0;
	}
}

// Функция для посчёта периметра, площади и средней линии.
void itog(double& a,double& b,double& c,double& d, double& h){
	double P = a + b + c + d;
	double midLine = (a + b) / 2;
	double S = midLine * h;
	cout << "Периметр трапеции равен: " << P << endl;
	cout << "Площадь трапеции равна: " << S << endl;
	cout << "Средняя линяя равна: " << midLine << endl;
}

int main() {
    double a, b, c, d, h;

    // Ввод всех значений
    a = vvodChisla("Введите длину нижнего основания: ");
    b = vvodChisla("Введите длину верхнего основания: ");
    c = vvodChisla("Введите длину первой боковой стороны: ");
    d = vvodChisla("Введите длину второй боковой стороны: ");
    h = Visota(a, b, c, d);
    itog(a, b, c, d, h);
    return 0;
}
