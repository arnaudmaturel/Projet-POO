#include "stdafx.h"
#include "MyFormValAchS.h"



using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainValAch(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyFormValAchS formValAchS;

    Application::Run(% formValAchS);
}