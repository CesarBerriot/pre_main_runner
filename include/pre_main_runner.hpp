#pragma once

#define RUN_PRE_MAIN(...) RUN_PRE_MAIN_2(__COUNTER__, __VA_ARGS__)

#define RUN_PRE_MAIN_2(counter, ...) RUN_PRE_MAIN_3(counter, __VA_ARGS__)

#define RUN_PRE_MAIN_3(counter, ...)	\
int pre_main_runner_unused_##counter =	\
	[]									\
	{	do								\
		{	__VA_ARGS__					\
		} while(false);					\
		return 0;						\
	}();
