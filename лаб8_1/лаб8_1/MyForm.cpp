#include "MyForm.h"
#include "MyForm.h"
#include <Windows.h>
using namespace лаб81; // Project name
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
