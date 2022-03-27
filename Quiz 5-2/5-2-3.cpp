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


//- - - - - - - - - -- - - - - - - - - -   
// You should use the value "begin" and "end" to find the prime numbers between "begin" and "end"
// I will add one for loop to iterate from "begin" and "end"
    for(int num=begin; num <= end; num++)
    {
        for (int i = 2 ; i < num ; i++){
            if (num % i ==0){
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << num << " Not prime number " << endl;
        else
            cout << num << " Prime number " << endl;  
    }
        // for (int i = 2 ; i < num ; i++){
        //     if (num % i ==0){
        //         flag = 1;
        //         break;
        //     }
        // }
        // if (flag)
        //     cout << "Not prime number " << endl;
        // else
        //     cout << "Prime number " << endl;  
}