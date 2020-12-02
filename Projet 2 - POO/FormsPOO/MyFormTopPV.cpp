#include "stdafx.h"
#include "MyFormTopPV.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainTopPV(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyFormTopPV formTopPV;

    Application::Run(% formTopPV);
}
