#include "MyFormPersonnel.h"
#include "MyFormMain.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainPers(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	gp5_appli::MyFormPersonnel formPers;

	Application::Run(% formPers);
}