#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;
class CHARACTER{
public:
    string name;
    string House;
    string personality;
    string weapon;
    string arr3[5]={"Bow","Sword","Hammer","Staff","Unarmed"};
    string arr2[5]={"Introvert","Big Mouth","Charming","Unknown","neutral"};
    string arr[5]={"Wizard","Mercenary","Explorer","Assassin","Healer"};
};
void type_text(const std::string& text)
{
    // loop through each character in the text
    for (std::size_t i = 0; i < text.size(); ++i)
    {
        // output one character
        // flush to make sure the output is not delayed
        std::cout << text[i] << std::flush;

        // sleep 60 milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(60));
    }
}
int main()
{

    CHARACTER FALLEN;
    type_text("Hey! you are finally awake.\n");
    sleep(2);
    type_text("you were dreaming..\n");
    sleep(2);
    type_text("What is your name? fallen..\n");
    
    cin>>FALLEN.name;
    sleep(2);
    type_text(FALLEN.name + ", a good name.\n");
    sleep(2);
    type_text("You: Why would you call me Fallen?\n");
    sleep(2);
    type_text("look around you " + FALLEN.name + ", this is land of the dead. You died and fell here.\n");
    sleep(2);
    type_text("I'm the Guide of the Gates, I guide the Fallens.\n");
    sleep(2);
    type_text("what were on the land of the living?\n");
    cout<<"\n 0: Wizard\n 1: Mercenary\n 2: Explorer\n 3: Assassin\n 4: Healer\n"<<endl;
    cout<<"Choose your House: ";
    int choice;
    cin>>choice;
    FALLEN.House = FALLEN.arr[choice];
    sleep(2);
    type_text("Ah a member of House of " + FALLEN.House + "\n");
    sleep(2);
    type_text("what matches your?\n");

    cout<<" 0: Introvert\n 1: Big Mouth\n 2: Charming\n 3: Unknown\n 4: neutral\n"<<endl;
    cout<<"Choose your Personality: ";
    int choice2;
    cin>>choice2;
    FALLEN.personality = FALLEN.arr2[choice2];
    sleep(2);
    type_text("Ah so you are a " + FALLEN.personality + "\n");
    sleep(2);
    type_text("what Weapon did you use on the land of living?\n");
    sleep(2);
    cout<<" 0: Bow\n 1: Sword\n 2: Hammer\n 3: Staff\n 4: Unarmed"<<endl;
    cout<<"Choose your Weapon: ";
    int choice3;
    cin>>choice3;
    FALLEN.weapon = FALLEN.arr3[choice3];
    sleep(2);
    type_text("Good. Now walk toward the gates. Land Of The Dead awaits\n");
    sleep(2);
    cout<<"Character Created\n";
    cout<<"NAME: "<<FALLEN.name<<endl;
    cout<<"HOUSE: "<<FALLEN.House<<endl;
    cout<<"PERSONALITY: "<<FALLEN.personality<<endl;
    cout<<"WEAPON: "<<FALLEN.weapon<<endl;

    type_text("Your Journey Begins \n");

}