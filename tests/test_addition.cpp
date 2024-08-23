#include "gtest/gtest.h"

namespace cmake_gitsub {

	namespace tests {

		namespace test_addition {

			TEST(TestAddition, BasicTest) {
				ASSERT_TRUE(2 + 2 == 4);
			}
		}
	}
}

int main(int argc, char** argv) {

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}