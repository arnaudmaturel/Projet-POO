#include "stdafx.h"
#include "MyFormLogin.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainLogin(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOO::MyFormLogin formLogin;

	Application::Run(% formLogin);
}
