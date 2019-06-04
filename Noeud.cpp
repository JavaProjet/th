#include <iostream>

#include "Noeud.h"

Noeud::Noeud(int x){
	this->x=x;
	d=NULL;
	g=NULL;
}

Noeud::~Noeud(){
	SupArbre(this);
}

int Noeud::getX(){
	return x;
}

Noeud* Noeud::getGauche(){
	return g;
}

Noeud* Noeud::getDroite(){
	return d;
}

void Noeud::SetDroite(Noeud* d){
	this->d = d;
}

void Noeud::SetGauche(Noeud* g){
	this->g = g;
}

void Noeud::SupArbre(Noeud* N){
	if(N->g!=NULL){
		if(N->g->g == NULL && N->g->d == NULL){
			delete N->g;
			N->g=NULL;
		}
	}
	if(N->d!=NULL){
		if(N->d->d == NULL && N->d->g == NULL){
			delete N->d;
			N->d=NULL;
		}
	}
	if(N->d!=NULL) SupArbre(N->d);
	if(N->g!=NULL) SupArbre(N->g);
}
