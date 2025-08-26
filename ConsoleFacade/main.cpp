
#include <iostream>
#include <string>
#include <windows.h>

#include "console_colors.h"


int main() {
	Console::WriteLine("Hello world", Color::RED);
	std::cout << "Using cout\n";
	printf("Using printf\n");
	Console::Write("Different color", Color::GREEN);

}