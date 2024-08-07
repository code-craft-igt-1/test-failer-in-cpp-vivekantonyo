#pragma once
#include <iostream>
#include <sstream>

namespace ColorMapDetails {
    extern const char* majorColor[];
    extern const char* minorColor[];

	std::string printColorMap();
	int printColorMapSize();
    extern std::string expectedColorMap;
}
