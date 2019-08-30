#include <iostream>
#include <thread>
#include <string>
#include <mutex>
#include <fstream>
using namespace std;
mutex mu;
class LofFile
{
public:
	LofFile();
	~LofFile();
	void shared_print(string id, int value)
	{
		lock_guard<mutex> locker(m_mutex);
		f << "From" << id << ":" << value << endl;
	}
private:
	mutex m_mutex;
	ofstream f;
};

LofFile::LofFile()
{
	f.open("D:\log.txt");
}

LofFile::~LofFile()
{
}
void function_1(LofFile& log) {
	//mu.lock();
	for (int i = 0; i < 100; i++)
		log.shared_print("From func1`:", i);
	//mu.unlock();
}

int main()
{	
	LofFile log;
	thread t1(function_1,ref(log));
	//mu.lock();
	for (int i = 0; i < 100; i++)
	{
		log.shared_print("From main*:", i);
	}
	//mu.unlock();
	t1.join();
	return 0;
}
