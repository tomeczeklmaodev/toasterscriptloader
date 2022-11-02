#include <iostream>
#include <windows.h>
#include "headers/TextAlignment.h"
#include "headers/SL_Strings.h"
#include "headers/Colormod.h"

int main(int argc, char const *argv[])
{
	// Basic things like CMD title
	SetConsoleTitleA(("Toaster Script Loader " + SL_STR::VERSION + "; Based on " + SL_STR::CORE).c_str()); // Converting to LPCSTR from std::string, because windows.h doesn't like std::string

	// The next 3 lines are used only to tell the size of the console window. Will be removed later.
	std::cout << "Width: " << pageWidth << std::endl;
	GetConsoleDimensionsWIN32();
	std::cout << std::endl << std::endl;

	// Header text, static, only version changes.
	PrintText("Toaster Script Loader " + SL_STR::VERSION + " (" + SL_STR::CORE + " " + SL_STR::CORE_VERSION + ")", Alignment::Center); std::cout << std::endl;
	PrintText("Repository: " + SL_STR::LOADER_REPO, Alignment::Center); std::cout << std::endl;
	PrintText("Script source: " + SL_STR::SCRIPT_SRC, Alignment::Center); std::cout << std::endl;

	// Testing colors (Colormod.h): colors might get useful to indicate errors and warnings
	// Colors don't work on default Windows CMD host, only in Windows Terminal
	// Default CMD Host displays colors as: ←[XXm; where XX is a number corresponding to color code
	std::cout << std::endl;
	std::cout << Color::FG_DEFAULT << "::"; std::cout << Color::FG_BLACK << "::"; std::cout << Color::FG_RED << "::";
	std::cout << Color::FG_GREEN << "::"; std::cout << Color::FG_YELLOW << "::"; std::cout << Color::FG_BLUE << "::";
	std::cout << Color::FG_MAGENTA << "::";	std::cout << Color::FG_CYAN << "::"; std::cout << Color::FG_LIGHT_GRAY << "::";
	std::cout << Color::FG_DARK_GRAY << "::"; std::cout << Color::FG_LIGHT_RED << "::";	std::cout << Color::FG_LIGHT_GREEN << "::";
	std::cout << Color::FG_LIGHT_YELLOW << "::"; std::cout << Color::FG_LIGHT_BLUE << "::";	std::cout << Color::FG_LIGHT_MAGENTA << "::";
	std::cout << Color::FG_LIGHT_CYAN << "::"; std::cout << Color::FG_WHITE << "::"; std::cout << Color::FG_DEFAULT;
	std::cout << std::endl;

	// Preparing for arguments
	for (int i = 0; i < argc; i++)
	{
		std::cout << "[recv-arg@pos:" << i << "]: " << argv[i] << "\n"; // printing argument recieved and its position
	}

	getchar();
	return 0;
}