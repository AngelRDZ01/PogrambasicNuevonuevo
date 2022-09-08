#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<ctime>
#include<cmath>

using namespace std;

char nombre[10];
int edad;
int Videojuego;
int Realizar, Regresar;
int main()
{
	system("color 04");
	while (true)
	{
		cout << " --Bienvenido a pixelteca, donde tenemos los juegos mas originales del mundo mundial!!!--" << endl;
		do
		{
			system("pause");
			cout << " =========== BIENVENIDO AL PARAISO GEIMER ===========" << endl;
			cout << "1.-Agregar Artiuclo" << endl;
			cout << "2.-Modificar Articulo (No disponible)" << endl;
			cout << "3.-Eliminar Articulo (No disponible)" << endl;
			cout << "4.-Lista de Articulos Vigentes (No disponible)" << endl;
			cout << "5.-Limpiar pantalla" << endl;
			cout << "6.-Salir" << endl;
			cout << " ====================================================" << endl;
			cin >> Realizar;
			switch (Realizar)
			{
			case 1:
			{
				{

					cout << "\n--Registrese su primer nombre:-- " << endl;
					cin >> nombre;

					cout << "\n --Seleccione el Super Videojuego deseado:--" << endl;
					cout << "[1].-La Leyenda de Melda y el ukulele del tiempo.\n[2].-Puchamon." << endl;
					cout << "[3].-Los super hermanos Mauricio. \n[4].-Sanic el puerco velocista." << endl;
					cout << "---------------------------------------------" << endl;
					cin >> Videojuego;
					cout << "Juego solicitado y confirmado" << endl;
				}


			}
			break;
			{
			case 5:
				system("cls");

				break;

			}


			default:
				cout << "La opcion seleccionada esta equivocada o no esta implementada por favor espere a una nueva actualizacion..." << endl;
				break;
			}
		} while (Regresar == 1);


	}
	system("pause");
	return 0;
}