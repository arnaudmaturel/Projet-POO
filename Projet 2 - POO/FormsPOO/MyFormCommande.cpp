#include "stdafx.h"
#include "MyFormCommande.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainCom(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOcommande::MyFormCommande formCommande;

	Application::Run(% formCommande);
}