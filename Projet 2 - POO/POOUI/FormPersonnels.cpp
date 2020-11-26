#include "FormPersonnels.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void fP(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	POOUI::MyFormPersonnel GestionPersonnel;

	Application::Run(% GestionPersonnel);
}