#include "Observateur.h"

void Observateur::Update(const Observable* observable)const {
	//on affiche l'�tat de la variable 
	cout << "Change detected in " << observable->GetName() << ", value : "
		<< observable->Statut() << endl;
}