/*C ++ Programming Assessment Test*/

#include<iostream>
#include<stdlib.h>     
#include<ctime> 
using namespace std;

class RockPaperScissorsGame
{
	public:
		void game()
		{
			int player,computer;
			char playagain;
			char name[20];
		
		
		 srand(time(0));
		
		do
		{  
		   cout << "----- Rock Paper Scissors Game-----";
			cout << " \nPress 1 Is Rock";
			cout << "\nPress 2 Is Paper";
			cout << "\nPress 3 Is scissors";
			cout << "\n  Please Enter your name ";
			cin >> name;
			
			cout << "Enter your choice is(1-3): ";
			cin >> player;
			
			
		computer = (rand() % 3) + 1;
			
			cout << "\nyour choice:";
			display(player);
			cout << "\n Computer choice";
			display(computer);
			
			
			if(player == computer)
			{
				cout << "\nIt's Draw";
			}
			
		    else if((player == 1 && computer == 3) ||
                     (player == 2 && computer == 1) ||
                     (player == 3 && computer == 2)) {
                        cout <<  name  <<  "You are Win  " << "!"; 
            }
            else {
                   cout << "Computer Wins!\n";
                }
                
            cout << "\nDo you want to play again? (Y/N): ";
            cin >> playagain;
            
			} while (playagain == 'Y' || playagain == 'y');
            
        }
        private:
    
    void display(int choice)
    {
        if (choice == 1)
            cout << "Rock\n";
        else if (choice == 2)
            cout << "Paper\n";
        else if (choice == 3)
            cout << "Scissors\n";
        else
            cout << "Invalid choice\n";
    }
};

main()
{
	    RockPaperScissorsGame game;
	    game.game();
}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			



