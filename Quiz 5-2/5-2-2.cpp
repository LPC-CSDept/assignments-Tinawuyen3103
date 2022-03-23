#include <iostream>
using namespace std;

int main()
{
    int N, M;

    cout << "Enter you input:";
    cin >> N;
    M =1;
    while (M <=N){
        cout << M << "\t"<< N* M << endl;
        M +=1;
    }

}