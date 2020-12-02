#include "stdafx.h"
#include "MyFormMoyenPaiement.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainMpay(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOpaiementM::MyFormMoyenPaiement formPaiementM;

	Application::Run(% formPaiementM);
}