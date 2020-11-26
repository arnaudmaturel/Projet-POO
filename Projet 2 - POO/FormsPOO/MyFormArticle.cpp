#include "MyFormArticle.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void MainArt(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Nom du projet
	FormsPOO::MyFormArticle formArticle;

	Application::Run(% formArticle);
}