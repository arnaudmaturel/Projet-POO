#include "MyFormClient.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainCli(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOclient::MyFormClient formClient;

	Application::Run(% formClient);
}