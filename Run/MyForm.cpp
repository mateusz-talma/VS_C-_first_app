#include "MyForm.h"
#include "Dodanie.h"
#include "Buty.h"
#include "Ustawienia.h"
#include "Historia.h"
#include "Cele.h"
#include "Statystyki.h"
#include "Kalkulator.h"
#include "Nowy_cel.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)

{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Run::MyForm form;
	Application::Run(%form);

}