#include <iostream>
using namespace std;

int getsum(int);
int main() {
        int N;
        int sum;

        while (N != -1) {
                cout << "Enter your input ( N )\n";
                cin >> N;
                if (N != -1) {
                        sum = getsum(N);
                        cout << "The sum is " << sum << endl;
                }

        } while (N != -1);
}
int getsum(int N) {
        int num;
        int min, max;
        int sum = 0;
        int result = 0;
        for (int i = 0; i < N; i++)  
        {
                cout << "Enter your numbers \n";
                cin >> num; 
                sum += num;
                
                if (i == 0) {
                        min = num;  
                        max = num;
                }
                if (min > num)  
                        min = num;
                if (max < num)     
                        max = num; 
        }
        result = max + min;
        sum = sum - result;
        return sum;
}
