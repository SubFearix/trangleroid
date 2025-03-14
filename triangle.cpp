#include <iostream>
#include <math.h>
using namespace std;

int main(){
int a, b, c;
cout << "Ведите первую сторону: ";
cin >> a;
cout << "Ведите вторую сторону: ";
cin >> b;
cout << "Ведите третью сторону: ";
cin >> c;
if ((a+b>c && c+b>a && a+c>b) && (a>0 && b>0 && c>0)){
int perimeter = a+b+c;
float halfper = perimeter / 2.0;
float spaceGer = sqrt(halfper * (halfper - a) * (halfper - b) * (halfper - c));
bool isIsosceles = ((a == b || a == c || b == c)?true:false);
if (isIsosceles) {
cout << "Равнобедренный"<<endl;
} else {cout <<"Не равнобедренный"<<endl;}
cout << "Площадь по формуле Герона равна: "<<  spaceGer<<endl;
cout <<"Периметр равен: "<<perimeter <<endl;
} else {cout << "Треугольник не существует"<<endl;}
return 0;
}
