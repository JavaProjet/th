#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ArbreB.h"

ArbreB::ArbreB(int x){
	n = new Noeud(x);
}

ArbreB::ArbreB(){
	n = NULL;
}

ArbreB::~ArbreB(){
	delete n;
}

int ArbreB::getX(){
	if(n) return n->getX();
	else return -1;
}

void ArbreB::range(Noeud* dest, Noeud* exp, char ordre){
	if(ordre == '<'){
		if(exp->getX() < dest->getX()){
			if(dest->getGauche() == NULL) dest->SetGauche(exp);
			else range(dest->getGauche(), exp, ordre);
		}
		else {
			if(dest->getDroite() == NULL) dest->SetDroite(exp);
			else range(dest->getDroite(), exp, ordre);
		}
	}
}

Noeud* ArbreB::getN(){
	return n;
}

void ArbreB::setN(Noeud* n){
	this->n = n;
}

static void ArbreB::inserer(Noeud* n, ArbreB* a, char ordre){
	if(n){
		if(a->getN() == NULL) a->setN(n);
		else {
			range(a->getN(),n,ordre);
		}
	}
}

/*void ArbreB::inserer(Noeud* n, ArbreB* a, char ordre){
	if(n){
		if(this->n == NULL) this->n = n;
		else {
			range(this->n,n,ordre);
		}
	}
	if(a){
		if(this->n == NULL) this->n = a->getN();
		else {
			range(this,a->getN(),ordre);
		}
	}
}*/
