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
  const int REALES = 10;
  int pos[REALES] = {};
  int neg[REALES] = {};
  int contPos = 0, contNeg = 0;
  int numero;

  cout << "Ingrese " << REALES << " numeros. " << endl;

  for (int i = 0; i < REALES; i++)
  {
    cout << "# " << i + 1 << ": ";
    cin >> numero;

    if (numero >= 0)
    {
      pos[contPos] = numero;
      contPos++;
    }
    else
    {
      neg[contNeg] = numero;
      contNeg++;
    }
  }

  pos[contPos];
  neg[contNeg];

  cout << endl;
  cout << "-------------------------------------------------------------" << endl;
  cout << "Cantidad de Numeros en vector POS: " << contPos << endl;
  cout << "Los numeros del vector llamado POS son: " << endl;
  for (int i = 0; i < contPos; i++)
  {
    cout << pos[i] << endl;
  }
  cout << endl;
  cout << "-------------------------------------------------------------" << endl;
  cout << "Cantidad de numeros en vector NEG: " << contNeg << endl;
  cout << "Los numeros del vector llamado NEG son: " << endl;
  for (int i = 0; i < contNeg; i++)
  {
    cout << neg[i] << endl;
  }

  return 0;
}