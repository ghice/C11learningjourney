#include <stdio.h>

#include <list>
#include <mutex>
#include <algorithm>
#include <thread>

std::list<int> some_list;
std::mutex some_mutex;

void add_to_list(int new_vlaue)
{
	std::lock_guard<std::mutex> guard(some_mutex);
	some_list.push_back( new_vlaue);	
}

bool list_contains(int value_of_find)
{
	std::lock_guard<std::mutex> guard(some_mutex);
	return std::find(some_list.begin() ,some_list.end(), value_of_find )!= some_list.end();
}

int main()
{
	printf("hello,c11\n");
	
	//std::thrad AddThread(add_to_list ,10);
	//AddThread.
	
	return 0;
}
