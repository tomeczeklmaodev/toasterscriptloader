#include <iostream>
#include "headers/TextAlignment.h"

int main(int argc, char const *argv[])
{
	std::cout << "Width: " << pageWidth << std::endl; // remove later
	GetConsoleDimensionsWIN32(); // remove later
	std::cout << std::endl << std::endl; // remove later
	std::string titleText = "Toaster Script Loader 1.0";
	std::string subText_repo = "Repository: SL_LOADER_REPO";
	std::string subText_src = "Script source: SL_SCRIPT_SRC";
	PrintText(titleText, Alignment::Center); std::cout << std::endl;
	PrintText(subText_repo, Alignment::Center); std::cout << std::endl;
	PrintText(subText_src, Alignment::Center); std::cout << std::endl;

	getchar();
	return 0;
}