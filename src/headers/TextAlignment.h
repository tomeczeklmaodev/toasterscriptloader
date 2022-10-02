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