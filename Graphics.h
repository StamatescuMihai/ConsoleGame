#pragma once

#include <iostream>
#include <windows.h>
using namespace std;

#define U_PIXEL 0x2588

enum COLOUR
{
	BLACK = 0x0000,
	DARK_BLUE = 0x0001,
	DARK_GREEN = 0x0002,
	DARK_CYAN = 0x0003,
	DARK_RED = 0x0004,
	DARK_MAGENTA = 0x0005,
	DARK_YELLOW = 0x0006,
	GREY = 0x0007,
	BLUE = 0x0009,
	GREEN = 0x000A,
	CYAN = 0x000B,
	RED = 0x000C,
	MAGENTA = 0x000D,
	YELLOW = 0x000E,
	WHITE = 0x000F,
};

class Graphics {
private:
	int screenWidth;
	int screenHeight;
	HANDLE m_hOriginalConsole;
	CONSOLE_SCREEN_BUFFER_INFO m_OriginalConsoleInfo;
	HANDLE m_hConsole;
	SMALL_RECT m_rectWindow;
	CHAR_INFO* m_bufScreen;
	wstring m_sAppName;
public:
	Graphics (){
		screenWidth = 80;
		screenHeight = 30;
		m_hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	}

	int ConstructConsole(int width, int height, int fontw = 10, int fonth = 10)
	{
		screenWidth = width;
		screenHeight = height;

		CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof(cfi);
		cfi.nFont = 0;
		cfi.dwFontSize.X = fontw;
		cfi.dwFontSize.Y = fonth;
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;
		wcscpy_s(cfi.FaceName, L"Consolas");

		if (!SetCurrentConsoleFontEx(m_hConsole, false, &cfi))
			return Error((wchar_t*)"SetCurrentConsoleFontEx");

		COORD coordLargest = GetLargestConsoleWindowSize(m_hConsole);
		if (screenHeight > coordLargest.Y)
			return Error((wchar_t*)"Game Height Too Big");
		if (screenWidth > coordLargest.X)
			return Error((wchar_t*)"Game Width Too Big");

		COORD buffer = { (short)screenWidth, (short)screenHeight };
		if (!SetConsoleScreenBufferSize(m_hConsole, buffer))
			Error((wchar_t*)"SetConsoleScreenBufferSize");

		m_rectWindow = { 0, 0, (short)screenWidth - 1, (short)screenHeight - 1 };
		if (!SetConsoleWindowInfo(m_hConsole, TRUE, &m_rectWindow))
			Error((wchar_t*)"SetConsoleWindowInfo");

		m_bufScreen = new CHAR_INFO[screenWidth * screenHeight];

		return 1;
	}

	int getScreenWidth() {
		return screenWidth;
	}

	int getScreenHeight() {
		return screenHeight;
	}

	void DrawPixel(int x, int y, short col = 0x000F)
	{
		wchar_t c = 0x2588;
		if (x >= 0 && x < screenWidth && y >= 0 && y < screenHeight)
		{
			m_bufScreen[y * screenWidth + x].Char.UnicodeChar = c;
			m_bufScreen[y * screenWidth + x].Attributes = col;
		}
	}

	void Clip(int& x, int& y)
	{
		if (x < 0) x = 0;
		if (x >= screenWidth) x = screenWidth;
		if (y < 0) y = 0;
		if (y >= screenHeight) y = screenHeight;
	}


	~Graphics()
	{
		SetConsoleActiveScreenBuffer(m_hOriginalConsole);
		delete[] m_bufScreen;
	}

	void Update() {
		m_bufScreen[screenHeight * screenWidth - 1].Char.UnicodeChar = '\0';
		WriteConsoleOutput(m_hConsole, m_bufScreen, { (short)screenWidth, (short)screenHeight }, { 0,0 }, &m_rectWindow);
	}

	void ResetScreen() {
		for (int x = 0; x < screenWidth; x++) {
			for (int y = 0; y < screenHeight; y++) {
				DrawPixel(x, y, BLACK);
			}
		}
	}

protected:
	int Error(wchar_t* msg)
	{
		wchar_t buf[256];
		FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), buf, 256, NULL);
		SetConsoleActiveScreenBuffer(m_hOriginalConsole);
		wprintf(L"ERROR: %s\n\t%s\n", msg, buf);
		return -1;
	}
};