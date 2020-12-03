#include "stdafx.h"
#include "MyFormLogin.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void MainLog(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOlog::MyFormLogin formLogin;

	Application::Run(% formLogin);
}
