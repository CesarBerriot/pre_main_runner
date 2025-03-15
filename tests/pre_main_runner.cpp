#include <gtest/gtest.h>
#include <pre_main_runner.hpp>

static bool value = false;

RUN_PRE_MAIN()

RUN_PRE_MAIN
(	value = true;
)

TEST(pre_main_runner, pre_main_runner)
{	ASSERT_EQ(value, true);
}
