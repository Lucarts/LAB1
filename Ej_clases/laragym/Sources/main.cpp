/*
El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:

- Numero de Entrenamiento (1 - 9999)
- Cliente (101- 150)
- Tipo de Entrenamiento ( 1 - 10 )
- Tiempo del Entrenamiento (minutos) Puede haber varios registros de entrenamiento por cliente.

 La información no se encuentra agrupada ni ordenada. El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:

- Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
- Por cada cliente, los tipos de entrenamiento que realizó.
- Los tipos de entrenamiento que no se realizaron por ningún cliente.
*/

// si el cero se ignora - while
// de lo contrario se usa do while

#include <iostream>
using namespace std;
int main()
{
  cargarDatos();

  return 0;
}