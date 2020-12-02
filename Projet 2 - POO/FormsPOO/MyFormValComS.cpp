#include "stdafx.h"
#include "MyFormValComS.h"



using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainValCom(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyFormValComS formValComS;

    Application::Run(% formValComS);
}