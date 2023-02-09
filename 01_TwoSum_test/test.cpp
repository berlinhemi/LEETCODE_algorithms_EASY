#include "pch.h"
#include "../01_TwoSum/TwoSum.h"

TEST(Solution, TestName) {
	std::vector<int> v1{ 1,2 };
	std::vector<int> v2 = Solution::twoSum({ 1,2,3 }, 5);
  EXPECT_EQ(v1, v2);
  EXPECT_TRUE(true);
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}