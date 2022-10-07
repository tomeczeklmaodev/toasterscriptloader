#pragma once

#include <iostream>
#include <iomanip>
#include <sstream>
#include <list>
#include <iterator>

#if defined(_WIN32)
	void GetConsoleDimensionsWIN32();
#elif defined(unix)
	void GetConsoleDimensionsUNIX();
#endif

// TODO: make pageWidth refresh on every console window resize to make everything feel dynamic and not hardcoded
// That would be: if screen size changes, compare old size to new, if new larger/smaller redraw everything and put the new size into variable oldwindowsz (idk lol)
const int pageWidth = 120;
typedef std::list<std::string> WordList;
typedef void (*PrintLineFunction)(const std::string);

enum class Alignment
{
	Left,
	Right,
	Center,
	Justify
};

WordList SplitTextIntoWords(const std::string &text);
void JustifyLine(std::string line);
void _PrintText(const std::string &text, PrintLineFunction PrintLineFunc);
void PrintLineLeft(const std::string line);
void PrintLineRight(const std::string line);
void PrintLineCenter(const std::string line);
void PrintText(const std::string &text, Alignment align);