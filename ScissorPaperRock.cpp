#include<iostream>

int main()
{
    using std::cin;
    using std::cout;

    char computer_choice = 'S';
    char your_choice;

    cout << "What do you choose? \n" << ": ";

    cin >> your_choice;

    if (computer_choice == your_choice)
    {
        cout << "Draw";
    }

    else if (computer_choice != your_choice)
    {
        if (computer_choice == 'S' and your_choice == 'R')
        {
            cout << "Computer choice was " << "scissor" << " and your choice was " << "rock" << ". " << "So, you won!";
        }
        else if (computer_choice == 'R' and your_choice == 'S')
        {
            cout << "Computer choice was " << "rock" << " and your choice was " << "scissor" << ". " << "So, computer won!";
        }
        else if (computer_choice == 'R' and your_choice == 'P')
        {
            cout << "Computer choice was " << "rock" << " and your choice was " << "paper" << ". " << "So, you won!";
        }
        else if (computer_choice == 'P' and your_choice == 'S')
        {
            cout << "Computer choice was " << "paper" << " and your choice was " << "scissor" << ". " << "So, you won!";
        }
        else if (computer_choice == 'P' and your_choice == 'R')
        {
            cout << "Computer choice was " << "paper" << " and your choice was " << "rock" << ". " << "So, computer won!";
        }
        else if (computer_choice == 'S' and your_choice == 'P')
        {
            cout << "Computer choice was " << "scissor" << " and your choice was " << "paper" << ". " << "So, computer won!";
        }
    }

    else
    {
        cout << "Disqualified; for using cheating!";
    }
    return 0;
}