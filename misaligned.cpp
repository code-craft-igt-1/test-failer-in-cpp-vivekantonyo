#include "gtest/gtest.h"
#include "ColorMap.h"

TEST(ColorMapDetails, CheckColorMap) {
    int colorMapSize = ColorMapDetails::printColorMapSize();
    EXPECT_EQ(colorMapSize, 25);
    std::string colorMapContents = ColorMapDetails::printColorMap();
    EXPECT_EQ(colorMapContents, ColorMapDetails::expectedColorMap);
    std::cout << "All is well (maybe!)\n";
}
