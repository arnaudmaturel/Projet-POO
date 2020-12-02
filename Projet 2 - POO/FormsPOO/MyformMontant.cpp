#include "stdafx.h"
#include "MyformMontant.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainMontant(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyformMontant formMontant;

    Application::Run(% formMontant);
}