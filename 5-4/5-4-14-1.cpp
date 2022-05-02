#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <time.h>

using namespace std;
int main () {
    int N;
    cout << "How many random numbers would you like to generate?" << endl;
    cin >> N;
    
    srand(time(0));
    int value;
    ofstream file ("testfile.txt");

    int i = 0;
    while (i < N)
    {
         
        i++;
        cout << i;
        file << (rand() % 100) + 1 << "\n";
        
    }
    file.close();
    
}