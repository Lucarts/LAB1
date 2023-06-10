#include <iostream>
using namespace std;

int main()
{
  int legajo, turno, horas;
  char horario;

  // inicializo cosas del total

  cout << "Ingrese Legajo de Enfermero/a: ";
  cin >> legajo;

  while (legajo >= 0) // GRUPO / LOTE
  {
    // Inicializo cosas del grupo (enfermero)

    cout << "Turno Nro: ";
    cin >> turno;

    while (turno != 0) // SUBGRUPO
    {
      cout << "Ingrese Horario: ";
      cin >> horario;

      cout << "Cantidad de Horas: ";
      cin >> horas;
      // cosas de los registros

      cout << "Turno Nro: ";
      cin >> turno;
    } // Fin del Subgrupo / Sublote

    // Muestro o calculo cosas del grupo (enfermero)

    cout << "Ingrese Legajo de Enfermero/a: ";
    cin >> legajo;
  } // Fin del Grupo

  // Muestro cosas de todos los grupos (Enfermeros)
  return 0;
}