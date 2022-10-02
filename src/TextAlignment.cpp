#include "headers/TextAlignment.h"

#if defined(_WIN32)
	#include <windows.h>
	#include <stdio.h>
	void GetConsoleDimensionsWIN32()
	{
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		int columns, rows;

		GetConsoleScreenBufferInfo(GetStdHandle (STD_OUTPUT_HANDLE), &csbi);
		columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
		rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

		printf("Console columns (width): %d\n", columns);
		printf("Console rows (height): %d\n", rows);
	}
#elif defined(unix)
	#include <sys/ioctl.h>
	#include <stdio.h>
	#include <unistd.h>
	void GetConsoleDimensionsUNIX()
	{
		struct winsize w;
		ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

		printf("columns: %d\n", w.ws_col);
		printf("rows: %d\n", w.ws_row);
	}
#endif

WordList SplitTextIntoWords(const std::string &text)
{
	WordList words;
	std::istringstream in(text);
	std::copy(std::istream_iterator<std::string>(in),
			  std::istream_iterator<std::string>(),
			  std::back_inserter(words));
	return words;
}

void JustifyLine(std::string line)
{
	size_t pos = line.find_first_of(' ');
	if (pos != std::string::npos)
	{
		while (line.size() < pageWidth)
		{
			pos = line.find_first_not_of(' ', pos);
			line.insert(pos, " ");
			pos = line.find_first_of(' ', pos + 1);
			if (pos == std::string::npos)
				pos = line.find_first_of(' ');
		}
	}
	std::cout << line << std::endl;
}

void _PrintText(const std::string &text, PrintLineFunction PrintLineFunc)
{
	WordList words = SplitTextIntoWords(text);

	std::string line;
	for (const std::string& word : words)
	{
		if (line.size() + word.size() + 1 > pageWidth)
		{
			PrintLineFunc(line);
			line.clear();
			line = word;
		}
		else
		{
			if (!line.empty())
				line.append(" ");
			line.append(word);
		}
	}
	if (PrintLineFunc != JustifyLine)
		PrintLineFunc(line);
	else
		std::cout << line << std::endl;
}

void PrintLineLeft(const std::string line)
{
	std::cout << line; // if 1 new line needed << std::endl
}

void PrintLineRight(const std::string line)
{
	std::cout << std::setw(pageWidth) << std::right << line; // if 1 new line needed << std::endl
}

void PrintLineCenter(const std::string line)
{
	std::cout << std::string((pageWidth - line.size()) / 2, ' ') << line; // if 1 new line needed << std::endl
}

void PrintText(const std::string &text, Alignment align)
{
	PrintLineFunction array[] = {PrintLineLeft, PrintLineRight, PrintLineCenter, JustifyLine};
	_PrintText(text, array[static_cast<size_t>(align)]);
}