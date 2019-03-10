#include <stdio.h>
#include <thread>

void do_some_work()
{
	printf("this is workiing function\n");
	
}

int main()
{
	printf("hello,thread\n");
	
	std::thread my_thread(do_some_work);
	if( my_thread.joinable())
	{
		my_thread.join();
	}
	
	return 0;
}
