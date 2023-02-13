#include "pch.h"
#include "../04_ValidParentheses/04_ValidParentheses.h"

TEST(Palindrom, ValidBraces) {

	Solution s;

	EXPECT_EQ(s.isValid("()[]{}"), true);
	EXPECT_EQ(s.isValid("([]){([])}"), true);
	EXPECT_EQ(s.isValid("(([]){})"), true);

}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

