#include "stdafx.h"
#include "MyFormSimValCom.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainSimulationValCom(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Nom du projet
    FormsPOO::MyFormSimValCom formSimValCom;

    Application::Run(% formSimValCom);
}
