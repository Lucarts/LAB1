#include <iostream>
using namespace std;

#include "funciones.h"

// Limpiar Pantalla
void limpiarPantalla()
{
  system("clear");
}

// Menu Principal
void mostrarMenu()
{
  limpiarPantalla();
  cout << endl;
  cout << "IRWIN'S REVENGE" << endl;
  cout << "----------------------------------" << endl;
  cout << "1 - JUGAR PARA DOS JUGADORES" << endl;
  cout << "2 - ESTADÍSTICAS" << endl;
  cout << "3 - CRÉDITOS" << endl;
  cout << "---------------------------------" << endl;
  cout << "0 - SALIR" << endl;
}

// Ingresar opcion en el Menu Principal
void opcionDeJuego()
{
  int opcion;
  cout << endl;
  cout << "ELEGIR UNA OPCION: ";
  cin >> opcion;

  while (opcion != 0)
  {
    if (opcion == 1)
    {
      cargarJugadores();
    }
    if (opcion == 2)
    {
      estadisticas();
    }

    if (opcion == 3)
    {
      creditos();
    }
    if (opcion == 4)
    {
      mostrarMenu();
    }

    cout << endl;
    cout << "ELEGIR UNA OPCION: ";
    cin >> opcion;
  }
}

// Ingresar nombre de los jugadores
void cargarJugadores()
{
  string jugadorUno, jugadorDos;
  limpiarPantalla();
  cout << endl;
  cout << "------ INGRESAR NOMBRES ------" << endl;
  cout << "JUGADOR UNO: ";
  cin >> jugadorUno;
  cout << "JUGADOR DOS: ";
  cin >> jugadorDos;
}

// ESTADISTICAS
void estadisticas()
{
  limpiarPantalla();
  cout << endl;
  cout << "---------- ESTADÍSTICAS ----------" << endl;
  cout << "----------------------------------" << endl;
  cout << endl;
  cout << "4 - VOLVER AL MENU PRINCIPAL" << endl;
  cout << endl;
}

// CREDITOS
void creditos()
{
  limpiarPantalla();
  cout << endl;
  cout << "------------ CRÉDITOS ------------" << endl;
  cout << "----------------------------------" << endl;
  cout << endl;
  cout << "4 - VOLVER AL MENU PRINCIPAL" << endl;
  cout << endl;
}