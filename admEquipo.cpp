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
					 archivocompleto+=linea; 
		      }
			  cout<<archivocompleto;     
		    Leer.close();
			return ligas;	
		}
		
};
#endif

