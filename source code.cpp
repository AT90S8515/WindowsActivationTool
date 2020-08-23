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
	cout << "Do you have Windows10 Pro or Windows10 Home? 1/2" << endl;
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
