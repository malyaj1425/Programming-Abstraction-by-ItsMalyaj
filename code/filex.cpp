#include<iostream>
#include<stdlib.h>
using namespace std;
class Player{
    string name;
    int Mcount,wins,lose;
    string game;
    public:

    // constructors
    Player(string name_="", int Mcount_=0, int wins_=0, int lose_=0,string game_="");
    // setters
    void name_(string name);
    void Mcount_(int Mcount);
    void wins_(int wins);
    void lose_(int lose);
    void game_(string game);


};
Player::Player(string name_,int Mcount_, int wins_, int lose_,string game_): 
    name(name_),
    Mcount(Mcount_),
    wins(wins_),
    lose(lose_),
    game(game_)
{
    cout<<name<<" "<<Mcount<<" "<<wins<<" "<<lose<<" "<<game;
}




int main(){
    Player("Josh",3,2,1,"Basketball");
    return 0;
}