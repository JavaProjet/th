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
	Noeud n4(4);
	Noeud n2(2);
	Noeud n3(3);
	Noeud n8(8);
	Noeud n7(7);
	Noeud n6(6);
	Noeud n1(1);
	ArbreB::inserer(&n4,&a,'<');
	return 0;
}
