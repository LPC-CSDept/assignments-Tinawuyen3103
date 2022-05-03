#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <time.h>

using namespace std;
int main () {
	int N, i;
	double sum = 0, average;
	cout << "How many random numbers would you like to generate?" << endl;
	cin >> N;
	int a[N];
	int min, max;
	
	srand(time(0));
	ofstream file ("testfile.txt");
	
	for (i = 0; i < N; i++)
	{
		a[i] = (rand() % 100) + 1;
		file << a[i] << "\n";
		sum = sum + a[i];
		{
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
		}
	}
	file.close();
	
	average = sum/N;
	
	cout << "Total of integers: " << N << endl;
	cout << "The sum is: " << sum << endl;
	cout << "The min is : " << min << endl;
	cout << "The max is: " << max << endl;
	cout << "The average between all random numbers is: " << average << endl;
	
	return 0;
}
