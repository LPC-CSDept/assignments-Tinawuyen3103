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
    ofstream file ("testfile.txt");

    int i = 0;
    while (i < N)
    {
         
        i++;
        file << (rand() % 100) + 1 << "\n";
        
    }
    file.close();
    
}
