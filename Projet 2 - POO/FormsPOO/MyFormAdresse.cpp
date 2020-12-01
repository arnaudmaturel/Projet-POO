#include "stdafx.h"
#include "MyFormAdresse.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainAdr(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOadresse::MyFormAdresse formAdresse;

	Application::Run(% formAdresse);
}