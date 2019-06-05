#include "Noeud.h"

class ArbreB{
	private :
		Noeud* n;
		static void range(Noeud* dest, Noeud* exp, char ordre);
		
	public :
		ArbreB(int x);
		ArbreB();
		~ArbreB();
		int getX();
		Noeud* getN();
		void setN(Noeud* n);
		static void inserer(Noeud* n, ArbreB* a, char ordre);
		Noeud* rechercher(int x, Noeud* n);
};
