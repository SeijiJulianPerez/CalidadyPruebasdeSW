#include "first.cc"
#include "../../googletest/googletest/include/gtest/gtest.h"

TEST(Factorial, positivos)
{
	ASSERT_EQ(1, fact(1,1));
	ASSERT_EQ(120, fact(5,1));
}

TEST(Factorial, negativos)
{
	ASSERT_EQ(1, fact(-5,1));
}
