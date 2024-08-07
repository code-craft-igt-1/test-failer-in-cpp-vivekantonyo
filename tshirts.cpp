#include "gtest/gtest.h"
#include "tshirts.h"

namespace TshirtSizeChart {
    char size(int cms) {
        char sizeName = '\0';
        if (cms < 38) {
            sizeName = 'S';
        } else if (cms > 38 && cms < 42) {
            sizeName = 'M';
        } else if (cms > 42) {
            sizeName = 'L';
        }
        return sizeName;
    }
}  // namespace TshirtSizeChart

TEST(TshirtSizeChart, CheckTshirtSize) {
    EXPECT_EQ(TshirtSizeChart::size(37), 'S');
    EXPECT_EQ(TshirtSizeChart::size(40), 'M');
    EXPECT_EQ(TshirtSizeChart::size(43), 'L');
    EXPECT_EQ(TshirtSizeChart::size(38), 'M');
    EXPECT_EQ(TshirtSizeChart::size(42), 'L');
    std::cout << "All is well (maybe!)\n";
}
