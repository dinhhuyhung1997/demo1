#include <iostream>
#include <thread>
using namespace std;
//edit by git
//<<<<<<< HEAD
//creat conflict on local
//add at 7 line
void threadFunc()
{
	//cout << "Welcome to Multithreading 3" << endl;
	cout << "Multithreading 1" << endl;
	cout << "Multithreading 2" << endl;
	cout << "Multithreading 3" << endl;
}

//add a comment line
//add a comment line
int main()
{
	//create 3 different threads
	thread t1(threadFunc);
	thread t2(threadFunc);
	thread t3(threadFunc);
	//get id of all the threads
	thread::id id1 = t1.get_id();
	thread::id id2 = t2.get_id();
	thread::id id3 = t3.get_id();

	//join all the threads
	if (t1.joinable())
		{
		t1.join();
		cout << "Thread with id " << id1 << " is terminated" << endl;
	}
//add a comment line
//add a comment line
//add a comment line
//add a comment line
//add a comment line
//add a comment line
	if (t2.joinable())
	{
		t2.join();
		cout << "Thread with id " << id2 << " is terminated" << endl;
	}

	if (t3.joinable())
	{
		t3.join();
		cout << "Thread with id " << id3 << " is terminated" << endl;
	}

	return 0;
}
