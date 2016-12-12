// test_windows_forms.cpp: главный файл проекта.

#pragma unmanaged

#include "stdafx.h"
#include "test_windows_forms.h"

#include "Form1.h"

using namespace test_windows_forms;

showForm::showForm(){
}

showForm::~showForm(){
}

void showForm::createForm(void){
	Form1^ window = gcnew Form1();
};




/*
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew Form1());
	return 0;
}*/
