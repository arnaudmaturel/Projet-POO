#include "stdafx.h"
#include "MyFormStats.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainStats(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOstats::MyFormStats formStats;

	Application::Run(% formStats);
}