// Tp 06 - Array
// Ejerdicio 01

/*
Hacer un programa que le pida al usuario una lista de 10 números enteros y
luego de ingresarlos muestre cuáles de ellos fueron positivos.
*/

#include <iostream>
using namespace std;

int main()
{
  const int ENTEROS = 10;
  int numeros[ENTEROS] = {};

  cout << "Ingrese " << ENTEROS << " numeros: " << endl;
  for (int i = 0; i < ENTEROS; i++)
  {
    cout << "# " << i + 1 << ": ";
    cin >> numeros[i];
  }

  cout << endl;
  cout << "-------------------------------------" << endl;
  cout << "Numeros Positivos ingresados: " << endl;
  for (int i = 0; i < ENTEROS; i++)
  {
    if (numeros[i] >= 0)
    {
      cout << numeros[i] << endl;
    }
  }
  cout << "-------------------------------------" << endl;
  return 0;
}