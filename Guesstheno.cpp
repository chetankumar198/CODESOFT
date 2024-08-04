#include <iostream>

using namespace std;

int main()
{
   

   int randomnumber = rand() % 100 + 1; 
   cout << "Welcome to the number game. Please guess a number from 1 to 50!" << endl;
   int tries = 1;
   int guess = 0;


   while (guess != randomnumber){
        cout << "Guess the number! ";
        cin >> guess;
            if (guess < randomnumber) {
                cout << "ooh - too low. Try again." << endl;
            }else if (guess > randomnumber) {
                cout << "Too high. Try again. "  << endl;
            }
        tries ++;
        }
        
        string comment;
        if (tries < 10) {
            comment = " - congrats your guess is right!";
        } else if (tries > 30) {
            comment = "Uhm.. took a lot of time.";
        }
        cout << "Great job you only took " << tries << " attempts!" << comment;

    return 0;
}