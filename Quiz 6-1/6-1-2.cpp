#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
    void gerRandnum(int &n1, int &n2, int &n3);
    int  findMin(int n1, int n2, int n3); 
    void printResult(int n1, int n2, int n3, int min);

    main()
    {
        int n1, n2, n3, min;
        gerRandnum(n1, n2, n3);
        min = findMin(n1, n2, n3);
        printResult(n1, n2, n3, min);
        return 0;
    }
    void gerRandnum(int &n1, int &n2, int &n3)
    {
        srand(time(0));
        n1 = rand() % 100 + 1;
        n2 = rand() % 100 + 1;
        n3 = rand() % 100 + 1;
    }
    int findMin(int n1, int n2, int n3)
    {
        int min;
        if (n1 < n2 && n1 < n3)
            min = n1;
        else if (n2 < n1 && n2 < n3)
            min = n2;
        else
            min = n3;
        return min;
    }
    void printResult(int n1, int n2, int n3, int min)
    {
        cout << "n1 = " << n1 << " n2 = " << n2 << " n3 = " << n3 << endl;
        cout << "min = " << min << endl;
    }