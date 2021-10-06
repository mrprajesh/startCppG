#include "../hello.cpp"
#include <gtest/gtest.h>
 TEST(SumTest, Zero) {
  EXPECT_EQ(0, sumInt({0}));
}

TEST(SumTest, Positives) {
  EXPECT_EQ(55, sumInt({1,2,3,4,5,6,7,8,9,10}));
  EXPECT_EQ(15, sumInt({1,2,3,4,5}));
}

TEST(SumTest, Negatives) {
  EXPECT_EQ(-55, sumInt({-1,-2,-3,-4,-5,-6,-7,-8,-9,-10}));
  EXPECT_EQ(-15, sumInt({-1,-2,-3,-4,-5}));
}

TEST(SumTest, CombinedPosNeg) {
  EXPECT_EQ(0, sumInt({1,2,3,4,5,-5,-4,-3,-2,-1}));
}

int main(int argc, char **argv)
{
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
