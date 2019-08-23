#include "Jugador.cpp"

using namespace std;

#ifndef EQUIPO_CPP
#define EQUIPO_CPP
class Equipo{
	private:
		string nombre;
    	string anofundacion;
    	vector<Jugador*> jugadores;
	public:
		Equipo() {
	    }
	
	    Equipo(string nombre, string anofundacion) {
	        this->nombre = nombre;
	        this->anofundacion = anofundacion;
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    string getAnofundacion() {
	        return anofundacion;
	    }
	
	    void setAnofundacion(string anofundacion) {
	        this->anofundacion = anofundacion;
	    }
	    
	    void setJugador(Jugador* x){
	    	jugadores.push_back(x);
		}
		
		void delJugador(int x){
			jugadores.erase(jugadores.begin()+x);
		}
		
		void setJugadores(vector<Jugador*> jugadores){
			this->jugadores = jugadores;
		}
		
		vector<Jugador*> getJugadores(){
			return jugadores;
		}
		
		Jugador* getJugador(int x){
			return jugadores.at(x);
		}
};
#endif
