#include "MyFormStock.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainSto(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOstock::MyFormStock formStock;

	Application::Run(% formStock);
}