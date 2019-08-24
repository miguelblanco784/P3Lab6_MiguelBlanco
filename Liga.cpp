#include "Equipo.cpp"

using namespace std;

#ifndef LIGA_CPP
#define LIGA_CPP
class Liga{
	private:
		string nombre;
    	string pais;
		vector<Equipo*> equipos;  
	public:
		Liga() {
	    }
	
	    Liga(string nombre, string pais) {
	        this->nombre = nombre;
	        this->pais = pais;
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    string getPais() {
	        return pais;
	    }
	
	    void setPais(string pais) {
	        this->pais = pais;
	    }
		
		void setEquipo(Equipo* x){
			equipos.push_back(x);
		}
		
		void delEquipo(int x){
			equipos.erase(equipos.begin()+x);
		}
		
		Equipo* getEquipo(int x){
			return equipos.at(x);
		}
		
		vector<Equipo*> getEquipos(){
			return equipos;
		}
		
		void setEquipos(vector<Equipo*> x){
			equipos = x;
		}
		
		
};
#endif

