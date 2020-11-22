#include <iostream>
#include <thread>

using namespace std;

void countUp() {
	for (int i = 0; i <= 20; i++) {
		cout << i << endl;
	}
}

void countDown() {
	for (int i = 20; i >= 0; i--) {
		cout << i << endl;
	}
}

int main()
{
	thread upThread(countUp);
	thread downThread(countDown);
	upThread.join();
	downThread.join();
}
