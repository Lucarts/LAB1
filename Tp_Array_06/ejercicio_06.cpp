// Tp 06 - Array
// Ejerdicio 06

/*
Se ingresa por teclado un vector de 10 elementos todos distintos entre sí.
Luego eliminar el valor máximo y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 9 1 4 6 2 0 5 7 }, quedará → {1 3 1 4 6 2 0 5 7}
Nota: No mostrar el último elemento del vector.
*/

#include <iostream>
using namespace std;

int main()
{
  const int ELEMENTOS = 10;
  int vector[ELEMENTOS] = {};
  int maximo, indice;

  cout << endl;
  cout << "Ingrese " << ELEMENTOS << " numeros. " << endl;

  for (int i = 0; i < ELEMENTOS; i++)
  {
    cout << "# " << i + 1 << ": ";
    cin >> vector[i];
  }

  maximo = vector[0];
  indice = 0;

  for (int i = 1; i < ELEMENTOS; i++)
  {
    if (vector[i] > maximo)
    {
      maximo = vector[i];
      indice = i;
    }
  }
  cout << endl;
  cout << "--------------------------" << endl;
  cout << " Maximo ---------> " << maximo << " y su posicion indice es " << indice << endl;

  for (int i = indice + 1; i < ELEMENTOS; i++)
  {
    vector[i - 1] = vector[i];
  }

  cout << endl;
  cout << "{ ";
  for (int i = 0; i < ELEMENTOS - 1; i++)
  {
    cout << vector[i] << " ";
  }
  cout << "}" << endl;

  return 0;
}