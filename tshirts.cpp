#include <gtest/gtest.h>
#include "header/tshirts.h"

namespace TshirtSizeChart {
    char identifyTshirtSize(int shouldersize) {
        char TshirtsizeName = '\0';
        if (shouldersize < 38) {
            TshirtsizeName = 'S';
        } else if (shouldersize >= 38 && shouldersize < 42) {
            TshirtsizeName = 'M';
        } else if (shouldersize >= 42) {
            TshirtsizeName = 'L';
        }
        return TshirtsizeName;
    }
}  // namespace TshirtSizeChart

TEST(TshirtSizeChart, CheckTshirtSize) {
    EXPECT_EQ(TshirtSizeChart::identifyTshirtSize(37), 'S');
    EXPECT_EQ(TshirtSizeChart::identifyTshirtSize(40), 'M');
    EXPECT_EQ(TshirtSizeChart::identifyTshirtSize(43), 'L');
    EXPECT_EQ(TshirtSizeChart::identifyTshirtSize(38), 'M');
    EXPECT_EQ(TshirtSizeChart::identifyTshirtSize(42), 'L');
    std::cout << "All is well (maybe!)\n";
}
