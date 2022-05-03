#include    <iostream>
#include    <fstream>
using namespace std;

int main()
{
    int N;
    double score1, score2;
    string stuName;
    ofstream ofs;

    ofs.open("stuRecord.txt");
    if (!ofs){
        cout << "File Open Error\n";
        exit(0);
    }
    cout << "Enter the total number of students: "<<endl;
    cin >> N;

    for(int i=0; i<N; i++) {
        cout << "Enter the student name " << i+1 << ": " ;
        cin >> stuName;
        cout << "Enter the two score for " << stuName << ":" ;
        cin >> score1 >> score2;
        ofs << "Name: " << stuName << " Score 1: " << score1 << " Score 2: " << score2 << endl;
    }
    ofs.close();
}