#include "gtest/gtest.h"
#include "ColorMap.h"
using namespace ColorMapDetails;

TEST(ColorMapDetails, CheckColorMap)
{
    int colorMapSize = printColorMapSize();
    EXPECT_EQ(colorMapSize, 25);
    std::string colorMapContents = printColorMap();
    EXPECT_EQ(colorMapContents, expectedColorMap);
    std::cout << "All is well (maybe!)\n";
}
