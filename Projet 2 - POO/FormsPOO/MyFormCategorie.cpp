#include "stdafx.h"
#include "MyFormCategorie.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainCat(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOcategorie::MyFormCategorie formCategorie;

	Application::Run(% formCategorie);
}