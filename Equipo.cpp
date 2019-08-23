#include "Jugador.cpp"

using namespace std;

#ifndef EQUIPO_CPP
#define EQUIPO_CPP
class Equipo{
	private:
		int partidosjugados, partidosganados, partidosempatados, partidosperdidos, golesfavor, golescontra, diferenciagoles, puntos;
		string nombre;
    	string anofundacion;
    	vector<Jugador*> jugadores;
	public:
		Equipo() {
	    }
	
	    Equipo(string nombre, string anofundacion, vector<Jugador*> jugadores) {
	        this->nombre = nombre;
	        this->anofundacion = anofundacion;
	        this->jugadores = jugadores;
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
		
		//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
		
		int getPartidosjugados() {
	        return partidosjugados;
	    }
	
	    void setPartidosjugados(int partidosjugados) {
	        this->partidosjugados = partidosjugados;
	    }
	
	    int getPartidosganados() {
	        return partidosganados;
	    }
	
	    void setPartidosganados(int partidosganados) {
	        this->partidosganados = partidosganados;
	    }
	
	    int getPartidosempatados() {
	        return partidosempatados;
	    }
	
	    void setPartidosempatados(int partidosempatados) {
	        this->partidosempatados = partidosempatados;
	    }
	
	    int getPartidosperdidos() {
	        return partidosperdidos;
	    }
	
	    void setPartidosperdidos(int partidosperdidos) {
	        this->partidosperdidos = partidosperdidos;
	    }
	
	    int getGolesfavor() {
	        return golesfavor;
	    }
	
	    void setGolesfavor(int golesfavor) {
	        this->golesfavor = golesfavor;
	    }
	
	    int getGolescontra() {
	        return golescontra;
	    }
	
	    void setGolescontra(int golescontra) {
	        this->golescontra = golescontra;
	    }
	
	    int getDiferenciagoles() {
	        return diferenciagoles;
	    }
	
	    void setDiferenciagoles(int diferenciagoles) {
	        this->diferenciagoles = diferenciagoles;
	    }
	
	    int getPuntos() {
	        return puntos;
	    }
	
	    void setPuntos(int puntos) {
	        this->puntos = puntos;
	    }
};
#endif
