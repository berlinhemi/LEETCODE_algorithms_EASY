#include "pch.h"
#include "../02_Palindrom/Palindrom.h"

TEST(Palindrom, PalindromTrue) {

	Solution s;
	
	EXPECT_EQ(s.isPalindrome(111), true);
	EXPECT_EQ(s.isPalindrome(1221), true);
	EXPECT_EQ(s.isPalindrome(12321), true);

}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}