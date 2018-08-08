// WindowsForm.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

using namespace System;
using namespace WindowsForm;

[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
	Application::Run(gcnew Form1());
    return 0;
}
