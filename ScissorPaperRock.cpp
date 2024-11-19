#include <iostream>
#include <ctime>

char getComputerMove() 
{ 
    int move; 
    // generating random number between 0 - 2 
    srand(time(NULL)); 
    move = rand() % 3; 
  
    // returning move based on the random number generated 
    if (move == 0) { 
        return 'P'; 
    } 
    else if (move == 1) { 
        return 'S'; 
    } 
    else if (move == 2)
    {
        return 'R';
    }     
} 

int main()
{
    using std::cout;

    // Computer choice    
    char computer_choice = getComputerMove();    

    // Player Choice
    char your_choice;

    cout << "What do you choose? \n" << ": ";

    std::cin >> your_choice; // takes input of your choice

    // Condition checker to declare the result:
    if (computer_choice == your_choice)
    {
        cout << "Draw";
    }

    else if (computer_choice != your_choice)
    {
        if (computer_choice == 'S' and your_choice == 'R')
        {
            cout << "Computer choice was scissor and your choice was rock. So, you won!";
        }
        else if (computer_choice == 'R' and your_choice == 'S')
        {
            cout << "Computer choice was rock and your choice was scissor. So, computer won!";
        }
        else if (computer_choice == 'R' and your_choice == 'P')
        {
            cout << "Computer choice was " << "rock" << " and your choice was " << "paper" << ". " << "So, you won!";
        }
        else if (computer_choice == 'P' and your_choice == 'S')
        {
            cout << "Computer choice was paper and your choice was scissor .So, you won!";
        }
        else if (computer_choice == 'P' and your_choice == 'R')
        {
            cout << "Computer choice was paper and your choice was rock. So, computer won!";
        }
        else if (computer_choice == 'S' and your_choice == 'P')
        {
            cout << "Computer choice was scissor and your choice was paper. So, computer won!";
        }
    }

    else
    {
        cout << "Disqualified; the move doesn't exist :>";
    }
    
    return 0;
}