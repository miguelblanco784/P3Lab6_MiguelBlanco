#include "Liga.cpp"
#include "admEquipo.cpp"
using namespace std;

int main(){
	while(true){
		vector<Liga*> ligas;
		admEquipo adm;
		int opcion;
		cout<<"1- Administrar Ligas\n2- Administrar Equipos\n3- Administrar Jugadores\n4- Jugar Partido\n5- Cargar Archivo\n6- Guardar Archivo\n7- Ver tablas\n";
		cin>>opcion;
		switch(opcion){
			case 1:{
				system("cls");
				cout<<"1- Agregar\n2- Eliminar\n";
				int opcionh;
				switch(opcionh){
					case 1:{
						string nombre, pais;
						cout<<"Ingrese nombre: ";
						cin>>nombre;
						cout<<"Ingrese pais";
						cin>>pais;
						ligas.push_back(new Liga(nombre, pais));
						break;
					}
					case 2:{
						string nombre, pais;
						for(int i = 0; i < ligas.size();i++){
							cout<<i<<"   "<<ligas.at(i)->getNombre();
						}
						cout<<"Ingrese la liga";
						int posicion;
						cin>>posicion;
						ligas.erase(ligas.begin()+posicion);
						break;
					}
				}
				break;
			}//fin case 1
			case 2:{
				system("cls");
				if(ligas.size()>0){
					for(int i = 0; i < ligas.size();i++){
						cout<<i<<"   "<<ligas.at(i)->getNombre();
					}
					int opcion2;
					cout<<"Ingrese su liga";
					cin>>opcion2;
					int opcion3;
					cout<<"1- Agregar\n2- Eliminar";
					cin>>opcion3;
					switch(opcion3){
						case 1:{
							string nombre, anofundacion;
							cout<<"Ingrese nombre: ";
							cin>>nombre;
							cout<<"Ingrese ano fundacion: ";
							cin>>anofundacion;
							ligas.at(opcion2)->setEquipo(new Equipo(nombre, anofundacion));
							break;
						}
						case 2:{
							for(int i = 0; i < ligas.at(opcion2)->getEquipos().size();i++){
								cout<<i<<"    ";
								ligas.at(opcion2)->getEquipos().at(i)->getNombre();
							}
							int opcion5;
							cout<<"Ingres el que desea eliminar: ";
							cin>>opcion5;
							ligas.at(opcion2)->delEquipo(opcion5);
							break;
						}
					}
				}
				
				
				
				break;
			}//fin case 2
			case 3:{
				
				break;
			}//fin case 3
			case 4:{
				srand(time(0));
				int equipo=(rand() % 10);
				for(int i = 0; i < ligas.size();i++){
					cout<<i<<"   "<<ligas.at(i)->getNombre();
				}
				
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
						cout<<ligas.at(i)->getEquipos().at(j)->getNombre();
						cout<<setw(10);
						cout<<ligas.at(i)->getEquipos().at(j)->getPartidosjugados();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos().at(j)->getPartidosganados();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos().at(j)->getPartidosempatados();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos().at(j)->getPartidosperdidos();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos().at(j)->getGolesfavor();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos().at(j)->getGolescontra();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos().at(j)->getDiferenciagoles();
						cout<<setw(5);
						cout<<ligas.at(i)->getEquipos().at(j)->getPuntos(); 
					}
				}
				break;
			}//fin case 7
		}	
	}//fin while infinito
}//fin main

