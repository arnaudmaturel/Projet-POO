#include "uiPers.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Personnel(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	UI::uiPers form1;

	Application::Run(% form1);
}