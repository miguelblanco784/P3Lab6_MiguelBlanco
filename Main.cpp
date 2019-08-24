#include "Liga.cpp"
#include "admEquipo.cpp"
using namespace std;

int main(){
	while(true){
		vector<Liga*> ligas;
		
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
				for(int i = 0; i < ligas.size(); i++){
					cout<<setw(5)<<ligas.at(i)->getNombre();
					for(int j = 0; j < ligas.at(i)->getEquipos().size();j++){
						cout<<j+1;
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos()->getNombre();
						cout<<setw(10);
						cout<<ligas.at(i)->getEquipos()->getPartidosjugados();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos()->getPartidosganados();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos()->getPartidosempatados();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos()->getPartidosperdidos();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos()->getGolesfavor();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos()->getGolescontra();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos()->getDiferenciagoles();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos()->getPuntos(); 
					}
				}
				break;
			}//fin case 7
		}	
	}//fin while infinito
}//fin main

