#include <iostream>
using namespace std;

int main()
{
    int begin, end;
    int num;
    int flag = 0;

    do {
        cout << "Input two numbers for the range ";
        cin >> begin >> end;
        } while ((begin > end) || (begin < 1) || (end > 100));

    for (int i = 2 ; i < num ; i++){
        if (num % i ==0){
            flag = 1;
            break;
        }
    }
    