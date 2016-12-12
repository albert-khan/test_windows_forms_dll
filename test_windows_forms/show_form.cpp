#pragma unmanaged

#include "stdafx.h"
#include "show_form.h"

#include "Form1.h"

using namespace test_windows_forms;

showForm::showForm(){
}

showForm::~showForm(){
}

void showForm::createForm(void){
	Form1^ window = gcnew Form1();
};