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

//Elaborate algorithm : Declare fstream for ofstream and ifstream class object. Declare string line for writing text file. 
//Deciding which is the file to copy and which is the file that get the copy. 
//In this case (grades.txt) will be the file that we're copying, also named as (ini_file). And (grades.bin) is the file that get the copy, named as (out_file).
//Using the while loop for the system to just read the (ini_file) and get the lines from it, in another words, is to copy the lines from the (grade.txt) file.
//Then it will print those lines into the (out_file {"grades.bin}). After the system done its part, it will close both files. 

//Output of q5test.cpp
Alfalfa   Aloysius   123-45-6789 40.0    90.0   100.0    83.0    49.0   D-
Alfred    University 123-12-1234 41.0    97.0    96.0    97.0    48.0   D+
Gerty     Gramma     567-89-0123 41.0    80.0    60.0    40.0    44.0   C
Android   Electric   087-65-4321 42.0    23.0    36.0    45.0    47.0   B-
Bumpkin   Fred       456-78-9012 43.0    78.0    88.0    77.0    45.0   A-
Rubble    Betty      234-56-7890 44.0    90.0    80.0    90.0    46.0   C-
Noshow    Cecil      345-67-8901 45.0    11.0    -1.0     4.0    43.0   F
Buff      Bif        632-79-9939 46.0    20.0    30.0    40.0    50.0   B+
Airpump   Andrew     223-45-6789 49.0     1.0    90.0   100.0    83.0   A
Backus    Jim        143-12-1234 48.0     1.0    97.0    96.0    97.0   A+
Carnivore Art        565-89-0123 44.0     1.0    80.0    60.0    40.0   D+
Dandy     Jim        087-75-4321 47.0     1.0    23.0    36.0    45.0   C+
Elephant  Ima        456-71-9012 45.0     1.0    78.0    88.0    77.0   B-
Franklin  Benny      234-56-2890 50.0     1.0    90.0    80.0    90.0   B-
George    Boy        345-67-3901 40.0     1.0    11.0    -1.0     4.0   B
Heffalump Harvey     632-79-9439 30.0     1.0    20.0    30.0    40.0   C
