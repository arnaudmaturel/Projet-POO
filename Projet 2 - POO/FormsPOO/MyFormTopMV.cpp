#include "stdafx.h"
#include "MyFormTopMV.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainTopMV(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyFormTopMV formTopMV;

    Application::Run(% formTopMV);
}