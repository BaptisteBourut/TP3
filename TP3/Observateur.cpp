#include "Observateur.h"

void Observateur::Update(const Observable* observable)const {
	//on affiche l'état de la variable 
	cout << "Change detected in " << observable->GetName() << ", value : "
		<< observable->Statut() << endl;
}