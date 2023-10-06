/************************************
 * Выполнил: Чепуштанов Е.П.        *
 * Группа: ПИ-231                   *
 * Лаба 3, вариант 25               *
 * https://onlinegdb.com/0O4iSjjNV  *
*************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int countT;
  double fi, E, C, T0, TP, trash;
  cout << "Введите E = ";
  cin >> E;
  cout << "Введите C = ";
  cin >> C;
  cout << "Введите T0 = ";
  cin >> T0;
  cout << "Введите TP = ";
  cin >> TP;
  cout << "Введите кол-во T = ";
  cin >> countT;
  cout.precision(3);
  cout << fixed;
  
  double T[countT];
  
  for (int i = 0; i < countT; ++i) {
    cout << "Введите " << i + 1 << " элемент T = ";
    cin >> T[i];
  }
  
  for (int j = 0; j < countT; ++j) {
    fi = (T[j] - TP) / (T0 - TP);
    if (fi < 0.4) {
      trash = 1.9 * pow( (T[j] / T0), 1.7 ) * C;
    } else if (fi > 0.4) {
      trash = 525 * exp( -(E / (4.575 * T[j]) ) ) * pow(C, 2);
    }
    cout << "При T = " << T[j] << " fi = " << fi << " trash = " << trash << endl;
  }
}
