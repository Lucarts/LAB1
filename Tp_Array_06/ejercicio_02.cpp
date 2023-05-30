// Tp 06 - Array
// Ejerdicio 02

/*
Hacer un programa donde se carguen 15 números enteros y luego le solicite al
usuario un número e indique si el mismo pertenece a la lista cargada
anteriormente.
*/

#include <iostream>
using namespace std;

int main()
{
  const int CANTIDAD = 15;
  int numeros[CANTIDAD] = {};
  bool coincidencia = false;
  int num;
  string mensaje;

  cout << "Ingrese " << CANTIDAD << " numeros por favor: " << endl;
  for (int i = 0; i < CANTIDAD; i++)
  {
    cout << "Numero # " << i + 1 << ": ";
    cin >> numeros[i];
  }

  cout << endl;
  cout << "Ingrese un numero: \t ";
  cin >> num;

  for (int i = 0; i < CANTIDAD; i++)
  {
    if (num == numeros[i])
    {
      coincidencia = true;
    }
  }

  cout << "--------------------------------------" << endl;
  if (coincidencia == true)
  {
    cout << "El numero que ingresaste esta en la lista de numeros ingresados" << endl;
  }
  else
  {
    cout << "El numero ingresado NO esta en la lista " << endl;
  }
  return 0;
}