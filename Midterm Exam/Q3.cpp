#include <iostream>
#include <fstream>
using namespace std;

int getRdnum() {
	return 1 + (rand() % 50);
}

int precedingNum; 
int isGreater(int n) {
	if (n > precedingNum) {
		return 1;
	}

	return 0;
}

int main()
{
	srand(time(nullptr));

	ofstream ofs("numbers.txt"); 
	if (!ofs.is_open()) { 
		cout << "Can not open numbers.txt for writing" << endl;
		return 1; 
	}

	int N = 10;
	int ranNum = getRdnum();
	ofs << ranNum; 
	precedingNum = ranNum; 
	N--;

	while (N > 0) { 
		ranNum = getRdnum();
		if (isGreater(ranNum)) { 
			ofs << " " << ranNum; 
			precedingNum = ranNum; 
		}
		N--;
	}

	ofs.close(); 

	return 0;
}
