#include "pch.h"

void CLemploye::consulter()
{
	cout << "Voici la liste des employe : " << this->nom << endl;
}

void CLemploye::ajouter(string oui)
{
	cout << "Voulez-vous ajouter un employe ?" << endl;
	cin >> oui;

	if (oui == "oui" || oui == "Oui" || oui == "OUI")
	{
		cout << "\nEntrez le nom du nouvel employe : " << endl;
		cin >> this->nom;

		cout << "\nEntrez le prenom du nouvel employe : " << endl;
		cin >> this->prenom;

		cout << "\nEntrez l'adresse du nouvel employe : " << endl;
		cin >> this->adresse;

		cout << "\nEntrez la ville du nouvel employe : " << endl;
		cin >> this->ville;

		cout << "\nEntrez le code postal du nouvel employe : " << endl;
		cin >> this->cp;

		cout << "\nEntrez la date de venu du nouvel employe : " << endl;
		cin >> this->dateEntree;
	}
	else
	{
		break;
	}
}

void CLemploye::supprimer(string oui)
{
	cout << "Voulez-vous supprimer un employe ?" << endl;
	cin >> oui;

	if (oui == "oui" || oui == "Oui" || oui == "OUI")
	{

	}
	else
	{
		break;
	}
}
