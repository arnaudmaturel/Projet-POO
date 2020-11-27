#include "MyFormPersonnel.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainPers(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOpersonnel::MyFormPersonnel formPers;

	Application::Run(% formPers);
}