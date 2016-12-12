// console.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "show_form.h" test_windows_forms
#include "test_windows_forms.h"

int _tmain(int argc, _TCHAR* argv[])
{
	showForm* form = new showForm();
	form->createForm();

	return 0;
}

