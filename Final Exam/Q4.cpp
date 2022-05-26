#include    <iostream>
#include    <fstream>
#include    <iomanip>
using namespace std;

const unsigned short N=5;
struct  Scores{
    double  sc[N];
    string  grade;
};
struct Grade{
    string  first;
    string  last;
    string  ssn;
    Scores  score;
};
Grade g;
void printstruct(Grade);

int main()
{
    fstream    fs;
    string line;
    
    ifstream ini_file {"grades.txt"};
    ofstream out_file {"grades.bin"};
    
    if(ini_file && out_file) {
 
        while(getline(ini_file,line)) {
            out_file << line << "\n";
        }
        cout << "Copy Finished. " << endl;
    } else {
        cout << "Cannot read file." << endl;
    }
    ini_file.close();
    out_file.close();
    
    while (fs.read((char *)&g, sizeof(g))) {
        printstruct(g);
    }
}
void printstruct(Grade g)
{
    cout << "Name : " << g.first << " " << g.last << "\t" << " SSN: " << g.ssn << "\n";
    cout << "\tScores: " ;
    for(int i = 0; i < N;i++)
        cout << showpoint << setprecision(2) << g.score.sc[i] << "\t" ;
    cout << "Grade " << g.score.grade << endl;

}
