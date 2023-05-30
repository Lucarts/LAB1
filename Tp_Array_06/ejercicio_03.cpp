// Tp 06 - Array
// Ejerdicio 03

/*
Hacer un programa donde se carguen 15 números enteros y luego muestre por
pantalla el mínimo elemento del vector y además indique cuántas veces se
repite el valor mínimo dentro del vector.
*/

#include <iostream>
using namespace std;

int main()
{
  const int ELEMENTOS = 15;
  int vector[ELEMENTOS] = {};
  int menor;
  int contadorMinimo = 0;

  cout << "Ingrese " << ELEMENTOS << " numeros enteros. " << endl;

  for (int i = 0; i < ELEMENTOS; i++)
  {
    cout << "Entero nro " << i + 1 << ": ";
    cin >> vector[i];
  }

  menor = vector[0];

  for (int i = 1; i < ELEMENTOS; i++)
  {
    if (vector[i] < menor)
    {
      menor = vector[i];
      contadorMinimo++;
    }
    else
    {
      if (menor == vector[i])
      {
        contadorMinimo++;
      }
    }
  }

  // Tener en cuenta que la solucion puede estar no realizada correctamente.
  cout << endl;
  cout << "El numero con valor minimo ingresado es " << menor << " y se repite " << contadorMinimo << " veces." << endl;

  return 0;
}