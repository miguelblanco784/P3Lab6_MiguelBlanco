#include <iostream>
#include <iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include <typeinfo>
#include <string>
#include <fstream>

using namespace std;

#ifndef JUGADOR_CPP
#define JUGADOR_CPP
class Jugador{
	private:
		string nombre;
	    string dorsal;
	    string paisorigen;
	public:
		Jugador() {
	    }
	
	    Jugador(string nombre, string dorsal, string paisorigen) {
	        this->nombre = nombre;
	        this->dorsal = dorsal;
	        this->paisorigen = paisorigen;
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    string getDorsal() {
	        return dorsal;
	    }
	
	    void setDorsal(string dorsal) {
	        this->dorsal = dorsal;
	    }
	
	    string getPaisorigen() {
	        return paisorigen;
	    }
	
	    void setPaisorigen(string paisorigen) {
	        this->paisorigen = paisorigen;
	    }
	    
	    void print(){
	    	cout<<"Nombre: "<<nombre<<" Dorsal: "<<" Pais Origen: "<<paisorigen<<endl;
		}
		
};
#endif
