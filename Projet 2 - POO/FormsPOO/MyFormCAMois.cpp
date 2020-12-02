#include "stdafx.h"
#include "MyFormCAMois.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainCAm(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyFormCAMois formCAMois;

    Application::Run(% formCAMois);
}