class Noeud {
	private :
		int x;
		Noeud* g;
		Noeud* d;
		void SupArbre(Noeud* N);
		
	public :
		Noeud(int x);
		~Noeud();
		void SetDroite(Noeud* d);
		void SetGauche(Noeud* g);
		int getX();
		Noeud* getGauche();
		Noeud* getDroite();
};
