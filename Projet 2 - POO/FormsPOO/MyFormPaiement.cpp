#include "stdafx.h"
#include "MyFormPaiement.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainPay(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOpaiement::MyFormPaiement formPaiement;

	Application::Run(% formPaiement);
}