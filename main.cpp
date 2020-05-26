#include <iostream>
#include <math.h>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include<time.h>

#include "Persona.h"
#include "Pelicula.h"

using namespace std;

Pelicula registrar()
{
    char nombre[100];
    char nombreD[100];
    char apellidosD[100];
    char nacionalidadD[100];
    int annio;
    char genero[100];
    char productora[100];
    int minutos;

    cout << "Nombre de pelicula"<<endl;
    cin >> nombre;

    cout << "Nombre del director"<<endl;
    cin >> nombreD;

    cout << "Apellidos del director"<<endl;
    cin >> apellidosD;

    cout << "Nacionalidad del director"<<endl;
    cin >> nacionalidadD;

    cout << "Annio de la pelicula"<<endl;
    cin >> annio;

    cout << "Genero de la pelicula"<<endl;
    cin >> genero;

    cout << "Productora de la pelicula"<<endl;
    cin >> productora;

    cout << "Minutos de la pelicula"<<endl;
    cin >> minutos;

    return  Pelicula(nombre,Persona(nombreD,apellidosD,nacionalidadD),annio,genero,productora,minutos);
}

void menu(){
    cout << "<========= MENU ===================>"<<endl;
    cout << "<=== 1.- Registrar pelicula ======>"<<endl;
    cout << "<=== 2.- Editar pelicula =========>"<<endl;
    cout << "<=== 3.- Eliminar pelicula =======>"<<endl;
    cout << "<=== 4.- Consultar Director ======>"<<endl;
    cout << "<=== 5.- Consultar información ===>"<<endl;
    cout << "<=================================>"<<endl;
}

int main(){
    Pelicula peliculas[10];
    int peliculasC = 0, op, no;
    bool pw = true;

    while(pw){
        menu();
        cin >> op;

        switch (op) {
            case 1:
                peliculas[peliculasC] = registrar();
                peliculasC++;
                break;
            case 2:
                cout << "Ingrese el numero de pelicula"<<endl;
                cin >> no;

                peliculas[no].toString();
                peliculas[no] = registrar();
                break;
            case 3:
                cout << "Ingrese el numero de pelicula"<<endl;
                cin >> no;

                peliculas[no].toString();
                peliculas[no] = Pelicula();
                break;
            case 4:
                cout << "Ingrese el numero de pelicula"<<endl;
                cin >> no;

                peliculas[no].getDirector();
                break;
            case 5:
                cout << "Ingrese el numero de pelicula"<<endl;
                cin >> no;

                peliculas[no].toString();
                break;
            default:
                pw = false;
                break;
        }
    }

    return 0;
}