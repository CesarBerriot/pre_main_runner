#pragma once

#define RUN_PRE_MAIN(...) RUN_PRE_MAIN_2(__COUNTER__, __VA_ARGS__)

#define RUN_PRE_MAIN_2(counter, ...) RUN_PRE_MAIN_3(counter, __VA_ARGS__)

#define RUN_PRE_MAIN_3(counter, ...)	\
namespace pre_main_runner_##counter					\
{	static class runner								\
	{	public:										\
			runner(void)							\
			{	__VA_ARGS__							\
			}										\
	} runner;										\
}
