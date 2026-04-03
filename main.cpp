#include <iostream>
#include <chrono>
#include <thread>
using namespace std;


//Need chrono and thread for time duration

/*
POSSIBLE AFFIRMATIONS TO USE:

My failures don't define who I am.
Grace gives me room to be inperfect.
I am a work in progress, and that's ok.
I have everything I need today.
you can let go of what you can't control.
you are heard and loved.
I can choose to take it easy.
Everything is happening in my favor.
My finances, relationships, and health are growing better and better.
You can challenge yourself.
It's not over till it's over.
I can survive.
You are a warrior.
You are full of love and hope.
I become 1% percent better every day.

*/
// STUDY TECHNIQUES TO CHOOSE FROM:
// 1. Pomodoro Technique: 25 min study, 5 min break, 3-4 sessions
// 2. 52/17 rule: 52 min study, 15 min break, 2-4 sessions
// 3. Animedoro: 60 min study, 20 min break(preferably with anime), 3-4 sessions
// 4. 35/5 rule: 35 min study, 5 min break, 3-4 sessions
// 5. 90/20 rule: 90 min study, 20 min break, 3 sessions
// 6. 112/26 rule: 112 min study, 26 min break, 2-3 sessions

void introductionStatement();
void randomAffirmation();

int main() {

    //introductionStatement();

/*
    int minutes = 0;
    int option;

    while(option < 6 && option > 0)
    {
        cout << "----------------------------------------" << endl;

        cout << "1. Pomodoro Technique\n"
             << "2. 52/17 rule\n"
             << "3. Animedoro\n"
             << "4. 35/5\n"
             << "5. 90/20 rule\n"
             << "6. 112/26 rule\n";

        cout << "----------------------------------------" << endl;
    }
    this_thread::sleep_for(chrono::minutes(minutes));
    cout << "3 seconds!";
*/


    return 0;
}

void introductionStatement()
{

    cout << "This program will change your life for the better!\n"
         << "This program will send you positive affirmations every few minutes during your study session\n";

    this_thread::sleep_for(chrono::seconds(6));

    cout << "Simply pick one of the following study techniques you would like to do, then I'll explain how this works." << endl;

}