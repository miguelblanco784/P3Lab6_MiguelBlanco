#include "Liga.cpp"
#include "admEquipo.cpp"
using namespace std;

int main(){
	while(true){
		
		int opcion;
		cout<<"1- Administrar Ligas\n2- Administrar Equipos\n3- Administrar Jugadores\n4- Jugar Partido\n5- Cargar Archivo\n6- Guardar Archivo\n7- Ver tablas\n";
		cin>>opcion;
		switch(opcion){
			case 1:{
				admEquipo x;
				x.leerLiga();
				break;
			}//fin case 1
			case 2:{
				
				break;
			}//fin case 2
			case 3:{
				
				break;
			}//fin case 3
			case 4:{
				
				break;
			}//fin case 4
			case 5:{
				
				break;
			}//fin case 5
			case 6:{
				
				break;
			}//fin case 6
			case 7:{
				
				break;
			}//fin case 7
		}	
	}//fin while infinito
}//fin main

