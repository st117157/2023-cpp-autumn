#include "MyForm.h"
#pragma once
#include <math.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project2MATRIX::MyForm form;
	Application::Run(% form);
}