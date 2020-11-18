#pragma once
#include "pch.h"

class CLemploye
{
public:

	void consulter();
	void ajouter(string);
	void supprimer(string);

protected:

	string nom;
	string prenom;
	string adresse;
	string ville;
	int cp;

private:

	int dateEntree;

};
