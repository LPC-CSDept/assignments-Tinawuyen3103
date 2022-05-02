#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int guess;
	int max = 100;
	srand(time(0));
	int random = rand()%max + 1;
	int i = 0;
	
	
	while (i <= 10) 
	{
		cout << "Guess a number between 1 to 100: " << endl;
		cin >> guess; 
	    
		if (guess < random)
		{
			cout << "Your guess is too low, try again." << endl;
		}
		else if (guess > random)
		{
			cout << "Your guess is too high, try again." << endl;
		}
		else
		{
			cout << "You guessed right!" << endl;
		}
	}
	return 0;
}
