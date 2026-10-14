#include <iostream>
#include <conio.h>

using namespace std;
 
int main()
{
  cout << "##  Program C++ Menghitung Luas Segitiga Siku-Siku  ##" << endl;
  cout << "============================================" << endl;
  cout << endl;
 
  float p, l, luas;
 
  cout << "Input Panjang Segitiga: ";
  cin >> p;
  cout << "Input Lebar Segitiga: ";
  cin >> l;
  cout << endl;
 
  luas = p * l / 2;
 
  cout << "Luas Segitiga = "<< luas <<  endl;
 _getch();
  return 0;
}
