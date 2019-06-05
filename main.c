#include <iostream>
#include "ArbreB.h"

void padding ( char ch, int n )
{
  int i;
  for ( i = 0; i < n; i++ )
    putchar ( ch );
}
void structure (Noeud* root, int level )
{
  if ( root == NULL ) {
    padding ( '\t', level );
    puts ( "~" );
  }
  else {
    structure ( root->getDroite(), level + 1 );
    padding ( '\t', level );
    printf ( "%d\n", root->getX() );
    structure ( root->getGauche(), level + 1 );
  }
}

int main(){
	ArbreB a(5);
	ArbreB::inserer(new Noeud(4),&a,'<');
	ArbreB::inserer(new Noeud(2),&a,'<');
	ArbreB::inserer(new Noeud(1),&a,'<');
	ArbreB::inserer(new Noeud(3),&a,'<');
	ArbreB::inserer(new Noeud(8),&a,'<');
	ArbreB::inserer(new Noeud(6),&a,'<');
	ArbreB::inserer(new Noeud(7),&a,'<');
	ArbreB::inserer(new Noeud(9),&a,'<');
	structure(a.getN(),0);
	//Noeud* recher = ArbreB::rechercher(x,a.getN());
	Noeud* recher = a.rechercher(2,a.getN());
	structure(recher,0);
	return 0;
}
