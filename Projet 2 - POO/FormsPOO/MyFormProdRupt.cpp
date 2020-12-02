#include "stdafx.h"
#include "MyFormProdRupt.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainProduitRupture(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyFormProdRupt formProdRupt;

    Application::Run(% formProdRupt);
}
