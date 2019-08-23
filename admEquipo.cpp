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
			for(int i = 1; i  < contdolar;i++){
				for(int j = 0; i < token(archivocompleto,"$",i).size();j++){
					if(token(archivocompleto,"$",i)[i]=='@'){
						
					}
				}
			}
			cout<<archivocompleto;
			for(int i = 1;i<contdolar;i++){
				cout<<"Linea"<<i;
				cout<<token(archivocompleto,"$",i)<<endl;
				token(archivocompleto,"$",i);
				for(int j = 0; j< 5;j++){
				}
				//ligas.push_back(new Liga(token(token(archivocompleto,"$",i),":",1),token(token(archivocompleto,"$",i),":",2),));	
			}    
		    Leer.close();
			return ligas;	
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

