#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void Hide()
{
	HWND Hide;
	AllocConsole();
	Hide = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(Hide, 0);
}

void Checksystem()
{
	cout << "Do you have Windows10 Pro or Windows10 Home? 1/2 (If you are getting error - enter 3 or 4 or 5 or 6 (this is just other variants of activation))" << endl;
	int answer;
	string key, ip;
	cin >> answer;
	switch(answer)
{
    case 1:
        key="slmgr /ipk 8N67H-M3CY9-QT7C4-2TR7M-TXYCV";
		ip="slmgr /skms kms.digiboy.ir";
    case 2:
		key="slmgr /ipk TX9XD-98N7V-6WMQ6-BX7FG-H8Q99";
		ip="slmgr /skms kms.digiboy.ir";
	case 3:
		key="slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX";
		ip="slmgr /skms kms.digiboy.ir";
	case 4:
		key="slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX";
		ip="slmgr /skms kms.xspace.in";
	case 5:
		key="slmgr /ipk 8N67H-M3CY9-QT7C4-2TR7M-TXYCV";
		ip="slmgr /skms kms.xspace.in";
	case 6:
		key="slmgr /ipk TX9XD-98N7V-6WMQ6-BX7FG-H8Q99";
		ip="slmgr /skms kms.xspace.in";
    default:
    	cout << "Activation is in progress...";
        break;
}
	int system(const char *s);
	system( (key).c_str() );
	Sleep(10000);
	system( (ip).c_str() );
	Sleep(10000);
	system("slmgr /ato");
}

int main()
{
	Checksystem();
	Hide();
}
// Made by alde-the-coder
