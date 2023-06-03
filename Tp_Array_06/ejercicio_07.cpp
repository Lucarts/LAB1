// Tp 06 - Array
// Ejerdicio 07

/*
Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos
entre sí y ordenados de menor a mayor. Se pide ingresar otro valor e insertarlo
en el orden correspondiente y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 4 5 6 7 10 12 16}
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16}
*/

#include <iostream>
using namespace std;

int main()
{
  const int LISTA = 10;
  int vector[LISTA] = {};
  int numero;

  cout << endl;
  cout << "Ingresar " << LISTA - 1 << " numeros" << endl;
  cout << "Los numeros ingresados deben ser distintos entre si y ordenados de menor a mayor." << endl;

  for (int i = 0; i < LISTA - 1; i++)
  {
    cout << "# " << i + 1 << ": ";
    cin >> vector[i];
  }
  cout << endl;
  cout << "Ahora ingresa otro numero, debe ser mayor al menor y menor al mayor " << endl;
  cin >> numero;

  // NO ESTA DEL TODO MAL
  // Corregir ejercicio
  for (int i = 0; i < LISTA; i++)
  {
    if (numero > vector[i] && numero < vector[i + 1])
    {
      vector[i] = numero;
    }
  }

  cout << endl;
  cout << "--------------" << endl;
  cout << "{ ";
  for (int i = 0; i < LISTA; i++)
  {
    cout << vector[i] << " ";
  }
  cout << "}";

  cout << endl;
  return 0;
}