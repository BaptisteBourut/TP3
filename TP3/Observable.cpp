#include "Observable.h"

void Observable::AddObs(Observateur* obs) {
	m_list.push_back(obs);
	obs->AddObs(this);
}

void Observable::DelObs(Observateur* obs) {
	iterator it = find(m_list.begin(), m_list.end(), obs);
	if (it != m_list.end()) {
		m_list.erase(it);
	}
}
Observable::~Observable() {
	iterator ite = m_list.end();
	for (iterator itb = m_list.begin(); itb != ite; itb++) {
		*(itb)->DelObs(this);
	}
}

void Observable::Notify() {
	iterator ite = m_list.end();
	for (iterator itb = m_list.begin(); itb != ite; itb++) {
		*(itb)->Update(this);
	}
	
}