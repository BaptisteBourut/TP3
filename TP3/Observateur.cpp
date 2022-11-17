#include "Observateur.h"

void Observateur::Update(const Observable* observable)const {
	//on affiche l'état de la variable 
	cout << "Change detected in " << observable->GetName() << ", value : "
		<< observable->Statut() << endl;
}
void Observateur::AddObs(Observable* obs) {
	m_list.push_back(obs);
}

void Observateur::DelObs(Observable* obs) {
	iterator it = find(m_list.begin(), m_list.end(), obs);
	if (it != m_list.end()) {
		m_list.erase(it);
	}
}
Observateur::~Observateur() {
	iterator ite = m_list.end();
	for (iterator itb = m_list.begin(); itb != ite; itb++) {
		(*itb)->DelObs(this);
	}
}
