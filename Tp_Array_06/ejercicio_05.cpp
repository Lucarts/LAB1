// Tp 06 - Array
// Ejerdicio 05

/*
Cargar un conjunto de 100 números reales y formar con los valores positivos un
vector llamado pos y con los valores negativos un vector llamado nega. Mostrar
por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores. Sólo deben utilizarse dos vectores en el programa: pos y nega.*/

#include <iostream>
using namespace std;

int main()
{
  const int REALES = 100;
  int contPos = 0, contNeg = 0;
  int numero;

  cout << "Ingrese " << REALES << " numeros. " << endl;

  for (int i = 0; i < REALES; i++)
  {
    cout << "# " << i + 1 << ": ";
    cin >> numero;

    if (numero >= 0)
    {
      contPos++;
    }
    else
    {
      contNeg++;
    }
  }

  int pos[contPos];

  return 0;
}