#include <gtest/gtest.h>
#include "fibonhead.h"
#include <cmath>


TEST(fibon, for_nine){

        int calcfibonachi = fibonachi <9>::value;
        
        ASSERT_EQ(34, calcfibonachi);
   
}

TEST(fibon, for_null) {
        int calcfibonachi = fibonachi <0>::value;

        ASSERT_EQ(0, calcfibonachi);
}

TEST(fibon, for_four) {
    int calcfibonachi = fibonachi <4>::value;

    ASSERT_EQ(3, calcfibonachi);
}

TEST(fibon, for_eighteen) {
 
        int calcfibonachi = fibonachi <18>::value;
        
        ASSERT_EQ(2584, calcfibonachi);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}