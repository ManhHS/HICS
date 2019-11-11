#include<iostream>
#include "MainFrom.h"
using namespace std;

int main()
{
	//System::Windows::Forms::Application::Run(gcnew Test::MainFrom);
	int a = 1, b = 2, c = 3;


	int* arr[3];
	for (int i = 0; i < 2;i++)
	{
		arr[i] = new int;
	}
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;

	for (int i = 0; i <= 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	delete arr[2];
	arr[2] = NULL;

	system("pause");
	return 0;
}