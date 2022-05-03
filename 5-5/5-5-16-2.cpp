#include    <iostream>
#include    <fstream>
using namespace std;

int main()
{
    int N;
    double score1, score2, sum, average, TotalSum, TotalAverage;
    string stuName;
    ofstream ofs;

    ofs.open("stuRecord.txt");
    if (!ofs){
        cout << "File Open Error\n";
        exit(0);
    }
    cout << "Enter the total number of students: "<<endl;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cout << "Enter the student name " << i+1 << ": " ;
        cin >> stuName;
        cout << "Enter the two score for " << stuName << ":" ;
        cin >> score1 >> score2;
        sum = score1 + score2;
        average = sum/2;
        TotalSum += sum;
        TotalAverage += average/N;
        ofs << "Name: " << stuName << " Score 1: " << score1 << " Score 2: " << score2 << " Sum: " << sum << " Average: " << average << endl;
    }
    ofs.close();
    
    cout << "Total sum is: " << TotalSum << " Total average is: " << TotalAverage << endl;
}