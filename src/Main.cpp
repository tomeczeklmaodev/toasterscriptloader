#include <iostream>
#include <windows.h>
#include "headers/TextAlignment.h"
#include "headers/SL_Strings.h"
#include "headers/Colormod.h"

int main(int argc, char const *argv[])
{
	// Basic things like CMD title
	std::string WindowTitleConsole = "[DEVELOPER BUILD] Toaster Script Loader " + SL_VERSION;
	SetConsoleTitleA(WindowTitleConsole.c_str()); // I'll remove the '[DEVELOPER BUILD]' prefix dw; converting to LPCSTR from std::string

	// The next 3 lines are used only to tell the size of the console window. Will be removed later.
	std::cout << "Width: " << pageWidth << std::endl;
	GetConsoleDimensionsWIN32();
	std::cout << std::endl << std::endl;

	// Header text, static, only version changes.
	PrintText("[TEST BUILD] Toaster Script Loader " + SL_VERSION, Alignment::Center); std::cout << std::endl;
	PrintText("Repository: " + SL_LOADER_REPO, Alignment::Center); std::cout << std::endl;
	PrintText("Script source: " + SL_SCRIPT_SRC, Alignment::Center); std::cout << std::endl;

	// Testing colors (Colormod.h)
	std::cout << std::endl;
	std::cout << Color::FG_DEFAULT << "::"; std::cout << Color::FG_BLACK << "::"; std::cout << Color::FG_RED << "::";
	std::cout << Color::FG_GREEN << "::"; std::cout << Color::FG_YELLOW << "::"; std::cout << Color::FG_BLUE << "::";
	std::cout << Color::FG_MAGENTA << "::";	std::cout << Color::FG_CYAN << "::"; std::cout << Color::FG_LIGHT_GRAY << "::";
	std::cout << Color::FG_DARK_GRAY << "::"; std::cout << Color::FG_LIGHT_RED << "::";	std::cout << Color::FG_LIGHT_GREEN << "::";
	std::cout << Color::FG_LIGHT_YELLOW << "::"; std::cout << Color::FG_LIGHT_BLUE << "::";	std::cout << Color::FG_LIGHT_MAGENTA << "::";
	std::cout << Color::FG_LIGHT_CYAN << "::"; std::cout << Color::FG_WHITE << "::";
	std::cout << std::endl;

	getchar();
	return 0;
}