// Create a function which simulates the game "rock, paper, scissors". The function takes the input of both players (rock, paper or scissors), first parameter from first player, second from second player. The function returns the result as such:

// "Player 1 wins"
// "Player 2 wins"
// "TIE" (if both inputs are the same)
// The rules of rock, paper, scissors, if not known:

// Both players have to say either "rock", "paper" or "scissors" at the same time.
// Rock beats scissors, paper beats rock, scissors beat paper.
// Examples
// rps("rock", "paper") ➞ "Player 2 wins"

// rps("paper", "rock") ➞ "Player 1 wins"

// rps("paper", "scissors") ➞ "Player 2 wins"

// rps("scissors", "scissors") ➞ "TIE"

// rps("scissors", "paper") ➞ "Player 1 wins"

#include<iostream>
using namespace std;
int main()
{
string r ,  p ,  s;
string choice;
string choice2;
cout<<"Press p for paper."<<endl;
cout<<"Press s for scissor."<<endl;
cout<<"Press r for rock."<<endl;
cout<<"Player 1 : "<<endl;
cin>> choice;
system ("CLS");
cout<<"Player 2 : "<<endl;
cin>>choice2;
if(choice == "r" && choice2 == "p")
{
    cout<<"Player 2 wins."<<endl;  
}
else if (choice == "p" && choice2 == "r")
{
    cout<<"Player 1 wins."<<endl;
}
else if(choice == "p" && choice2 == "s")
{
    cout<<"Player 2 wins."<<endl;
} 
else if(choice == "s" && choice2 == "s")
{
    cout<<"Tie"<<endl;
}
else if (choice == "s" && choice2 == "p")
{
    cout<<"Player 1 wins."<<endl;

}
}
    

    
