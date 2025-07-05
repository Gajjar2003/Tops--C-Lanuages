/*Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts*/

#include <iostream>
#include <cstdlib>  
#include <ctime> 

using namespace std;

main()
{
   int number,attempts =0, guess;
   
   cout << "Please enter your number choice is (1-10): ";
   
   srand(time(0)); 
    number = rand() % 10+1;
    
    do
    {
    	cout << "\nEnter your guess: ";
    	cin >> guess;
    	attempts++;
    	
    	if(number > guess)
    	{
    		cout << "Too high! Try again.";
		}
		else if( number < guess)
		{
			cout << "Too low! Try again.";
		}
		else 
		{
			 cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." ;
		}
	}while(guess != number);
   	
}
