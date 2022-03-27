#include <iostream>
using namespace std;

int main()
{
    int N, M, i;
    int pow;
    cout << "Enter you input:";
    cin >> N;
    // M =1;
    cin >> M; 
    pow = 1;
    i = 1;
    while (M <=N){
        // cout << M << "\t"<< N* M << endl;
        // Instead of printing values, you should calculate the power value
        pow *= M; // Let's assume M = 2 N = 4, pow will be 2, 4, 8, 16
        i +=1;
    }

}