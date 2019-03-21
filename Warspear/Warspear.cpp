// Warspear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "windows.h"

int main()
{
	HWND window = FindWindow(NULL, "Warspear online");
	std::cout << window;

	PostMessage(window, WM_KEYDOWN, VK_DOWN, MAKELPARAM(1, 0));
	PostMessage(window, WM_KEYUP, VK_DOWN, MAKELPARAM(1, 3));

	Sleep(500);

	PostMessage(window, WM_KEYDOWN, VK_RETURN, MAKELPARAM(1, 0));
	PostMessage(window, WM_KEYUP, VK_RETURN, MAKELPARAM(1, 3));

	Sleep(500);

	PostMessage(window, WM_KEYDOWN, VK_LEFT, MAKELPARAM(1, 0));
	PostMessage(window, WM_KEYUP, VK_LEFT, MAKELPARAM(1, 3));

	Sleep(500);

	PostMessage(window, WM_KEYDOWN, VK_RETURN, MAKELPARAM(1, 0));
	PostMessage(window, WM_KEYUP, VK_RETURN, MAKELPARAM(1, 3));

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
