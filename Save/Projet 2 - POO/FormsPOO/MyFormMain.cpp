#include "MyFormMain.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOO::MyFormMain formMain;

	Application::Run(% formMain);
}