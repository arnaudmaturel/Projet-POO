#include "stdafx.h"
#include "MyFormPanier_moy.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainPanierMoy(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyFormPanier_moy formPanier_moy;

    Application::Run(% formPanier_moy);
}
