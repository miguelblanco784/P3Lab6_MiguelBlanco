#include <iostream>
#include <iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <typeinfo>
#include <string>
#include <fstream>
#include "Liga.cpp"
using namespace std;

#ifndef ADMEQUIPO_CPP
#define ADMEQUIPO_CPP
class admEquipo{
	private:
		vector<Liga*> ligas;
	public:
		admEquipo(){}
		vector<Liga*> leerLiga(){
		    fstream Leer;
		    string linea;
		    Leer.open("./Grupo.txt");
			string archivocompleto; 
		    while(! Leer.eof()){
		        getline(Leer,linea);
				archivocompleto+=linea+"@"; 
		    }
		    int contdolar;
		    vector<int> contadorlista;
		    for(int i = 0;i<archivocompleto.size();i++){
				if(archivocompleto[i]=='$'){
					contdolar++;
				}
			}
			string temp;
			for(int i = 1; i<contdolar;i++){
				temp = token(archivocompleto,"$",i);
				int contarroba;
				contarroba = 0;
				for(int j = 0; j < temp.size();j++){
					if(temp[j]=='@'){
						contarroba++;
					}
				}
								
			}    
		    Leer.close();
			return ligas;	
		}
		
		void cargarArchivo(vector<Liga*> ligas){
			ofstream Escribir;
        	Escribir.open("./Grupo.t");  
        	for(int i=0; i<ligas.size();i++){
        		Escribir<<"$"<<ligas.at(i)->getNombre()<<":"<<ligas.at(i)->getPais()<<endl;
        		for (int j=0; j<ligas.at(i)->getEquipos().size(); j++){
        			Escribir<<ligas.at(i)->getEquipos().at(j)->getNombre()<<":"<<ligas.at(i)->getEquipos().at(j)->getAnofundacion()<<"{";
        			for (int k=0; k<ligas.at(i)->getEquipos().at(j)->getJugadores().size(); k++){
        				Escribir<<ligas.at(i)->getEquipos().at(j)->getJugadores().at(k)->getNombre()<<"|"<<ligas.at(i)->getEquipos().at(j)->getJugadores().at(k)->getDorsal()<<"|"<<ligas.at(i)->getEquipos().at(j)->getJugadores().at(k)->getPaisorigen();
        				if (k!= (ligas.at(i)->getEquipos().at(j)->getJugadores().size() -1)){
        					Escribir<<";";
        				}else{
        					Escribir<<"}"<<endl;
						}
					}
				}
			}             
          Escribir.close(); 
		}
		
		string token(string cadena, string divisor,int pos){
               if(cadena.size()>0){
                 char oracion[cadena.size()]; 
                 for (int i=0;i<=cadena.size();i++)
                 {oracion[i]=cadena[i];}                    
                 char *ptrtoken; 
                 int num=1;
                 const char* d=divisor.c_str();
                 ptrtoken = strtok(oracion , d);             
                 while(ptrtoken){
                     if(num==pos){ 
                        return ptrtoken;}                 
                     ptrtoken = strtok(NULL, d);
                     num++;}
                 return "";
               }else{return "";}
        }
};
#endif

