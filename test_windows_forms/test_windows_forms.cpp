// test_windows_forms.cpp: ������� ���� �������.

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
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}*/
