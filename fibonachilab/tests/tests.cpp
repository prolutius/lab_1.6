#include <gtest/gtest.h>
#include "fibonhead.h"
#include <cmath>


TEST(fibon, alltest){
    int y[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 };

        int ymy = fibonachi <9>::value;
        
        ASSERT_NEAR(34,ymy,100); 
   
}

TEST(fibon, for_null) {
        int ymy = fibonachi <0>::value;

        ASSERT_NEAR(0, ymy, 100);
}

TEST(fibon, for_four) {
    int ymy = fibonachi <4>::value;

    ASSERT_NEAR(3, ymy, 100);
}

TEST(fibon, after_thirteen) {
    int y[] = { 377,  610, 987, 1597, 2584, 4181, 6765, 10946, 17711};
 
        int ymy = fibonachi <18>::value;
        
        ASSERT_NEAR(2584, ymy, 100);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}