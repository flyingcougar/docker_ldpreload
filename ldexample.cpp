#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char **argv) {
	cout << "Hello" << endl;
	srand(time(NULL));
	int max_num=10;
	for (int i=0;i<=max_num;i++) {
		cout << "Random number is: " << rand()%100 << endl;
	}
	return 0;
}
