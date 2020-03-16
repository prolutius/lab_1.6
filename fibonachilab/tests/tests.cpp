#include <gtest/gtest.h>
#include "fibonhead.h"
#include <cmath>


TEST(fibon, alltest){
    int y[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 };
    for (int i = 0; i != 14; ++i)
    {
        int ymy = my_fibonachi(i);
        
        ASSERT_NEAR(y[i],ymy,100); 
    }    
}

TEST(fibon, for_null) {
    int y = 0;
        int ymy = my_fibonachi(0);

        ASSERT_NEAR(y, ymy, 100);
}

TEST(fibon, for_four) {
    int y = 3;
    int ymy = my_fibonachi(4);

    ASSERT_NEAR(y, ymy, 100);
}

TEST(fibon, after_thirteen) {
    int y[] = { 377,  610, 987, 1597, 2584, 4181, 6765, 10946, 17711};
    for (int i = 14, k =0; i < 23, k < 9; ++i, ++k)
    {
        int ymy = my_fibonachi(i);

        
        ASSERT_NEAR(y[k], ymy, 100);
    }
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}