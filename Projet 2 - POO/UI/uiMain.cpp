#include "MyFormMain.h"
#include "MyFormPersonnel.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	gp5_appli::MyFormMain formMain;

	Application::Run(% formMain);
}