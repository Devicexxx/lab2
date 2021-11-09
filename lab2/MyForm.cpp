#include "MyForm.h"
#include "Drob.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace lab2; // »м€ пространства имен из MyForm.h
[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm); // MyForm Ц им€ класса формы
}

