#include "stdafx.h"
#include "MyFormArticleCom.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainArtC(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOOarticleCom::MyFormArticleCom formArticleCom;

	Application::Run(% formArticleCom);
}