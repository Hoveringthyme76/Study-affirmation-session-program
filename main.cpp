#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

//Editor's note, I will be changing messages found on lines 67-116.
//Need chrono and thread for time duration.


// IMPORTANT REMINDER: This code is almost done, all I need to do now is make sure that I make it so the program prints a random affirmation every few minutes, tweak the visual messages
//                     then use allow myself and others to use this program if they find a use for it.

// STUDY TECHNIQUES TO CHOOSE FROM:
// 1. Pomodoro Technique: 25 min study, 5 min break, 3-4 sessions sends an affirmation once every 15 minutes.
// 2. 52/17 rule: 52 min study, 15 min break, 2-4 sessions
// 3. Animedoro: 60 min study, 20 min break(preferably with anime), 3-4 sessions
// 4. 35/5 rule: 35 min study, 5 min break, 3-4 sessions
// 5. 90/20 rule: 90 min study, 20 min break, 3 sessions
// 6. 112/26 rule: 112 min study, 26 min break, 2-3 sessions

int introductionStatement();

void studyCycle(int studyTechnique);
void randomAffirmation();

int main() {

    //int studyTechnique = introductionStatement();
    int studyTechnique;
    cin >> studyTechnique; //int studyTechnique and cin >> studyTechnique will be removed once I finished testing out the if else logic.


    if(studyTechnique == 1)
    {
        cout << "start 1\n";
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 2)
    {
        cout << "start 2";
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 3)
    {
        cout << "start 3";
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 4)
    {
        cout << "start 4";
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 5)
    {
        cout << "start 5";
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 6)
    {
        cout << "start 6";
        studyCycle(studyTechnique);
    };
/*
    
    this_thread::sleep_for(chrono::minutes(minutes));
    cout << "3 seconds!";
*/
    //Mainly just a safety precaution in case the while loop on the introductionStatement() function managed to stop somehow.
    if(studyTechnique == 0)
    {
        cout << "Congradulations, you managed to break the code in a way that I didn't see coming!\n"
             << "I'm so grateful that you found a flaw in this program and you should be proud of yourself for finding it the way you did.\n"
             << "If you would like me to improve this line of code in some way, then feel free to reach out to me, so I can take a look at it." << endl;
    }
    return 0;
}


int introductionStatement()
{

    cout << "This program will change your life for the better!\n"
         << "This program will send you positive affirmations every few minutes during your study session\n";

    this_thread::sleep_for(chrono::seconds(6));

    cout << "Simply pick one of the following study techniques you would like to do, based on the number you type, then I'll explain how this works." << endl;

    int playerChoice;
    char confirmApproval;

    while((playerChoice < 1 || playerChoice > 6) && (confirmApproval != 'Y' || confirmApproval != 'y'))
    {
        cout << "----------------------------------------" << endl;

        cout << "1. Pomodoro Technique\n"
             << "2. 52/17 rule\n"
             << "3. Animedoro\n"
             << "4. 35/5\n"
             << "5. 90/20 rule\n"
             << "6. 112/26 rule\n";

        cout << "----------------------------------------" << endl;

        cout << "Option: ";
        cin >> playerChoice;

        if(playerChoice < 1 && playerChoice > 6)
        {
            cout << "Whoops! It looks like that option isn't available. Please try again.\n";
        }
        else if(playerChoice == 1)
        {
            cout << "Pomodoro technique instructions, along with confirmation to use it.\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 2)
        {
            cout << "52/17 rule instructions, along with confirmation to use it.\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 3)
        {
            cout << "Animedoro instructions, along with confirmation to use it.\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 4)
        {
            cout << "35/5 rule instructions, along with confirmation to use it.\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 5)
        {
            cout << "90/20 rule instructions, along with confirmation to use it.\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 6)
        {
            cout << "112/26 rule instructions, along with confirmation to use it.\n";
            cin >> confirmApproval;
        };



        if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 1) //I might make it so it counts down before it starts the session, but I haven't decided yet.
        {
            cout << "Then let's get started! The study session begins now.\n";
            return 1;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 2)
        {
            cout << "Then let's get started! The study session begins now.\n";
            return 2;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 3)
        {
            cout << "Then let's get started! The study session begins now.\n";
            return 3;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 4)
        {
            cout << "Then let's get started! The study session begins now.\n";
            return 4;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 5)
        {
            cout << "Then let's get started! The study session begins now.\n";
            return 5;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 6)
        {
            cout << "Then let's get started! The study session begins now.\n";
            return 6;
        };
    };

    return 0;
};

void studyCycle(int studyTechnique)
{
    int minutes;

    if(studyTechnique == 1)
    {
        minutes = 3;
        this_thread::sleep_for(chrono::seconds(minutes));
        randomAffirmation();
    }
    else if(studyTechnique == 2)
    {
        cout << "20";
        randomAffirmation();
    }
    else if(studyTechnique == 3)
    {
        cout << "30";
        randomAffirmation();
    }
    else if(studyTechnique == 4)
    {
        cout << "40";
        randomAffirmation();
    }
    else if(studyTechnique == 5)
    {
        cout << "50";
        randomAffirmation();
    }
    else if(studyTechnique == 6)
    {
        cout << "60";
        randomAffirmation();
    };
}

void randomAffirmation()
{
    srand(time(0));   //Puts a starting value on my random number generator
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

    string affirmations[] = {"My failures don't define who I am.",
                             "Grace gives me room to be inperfect.",
                             "I am a work in progress, and that's ok.", 
                             "I have everything I need today.", 
                             "you can let go of what you can't control.", 
                             "you are heard and loved.", 
                             "I can choose to take it easy.", 
                             "Everything is happening in my favor.", 
                             "My finances, relationships, and health are growing better and better.", 
                             "You can challenge yourself.", 
                             "It's not over till it's over.", 
                             "I can survive.", 
                             "You are a warrior.", 
                             "You are full of love and hope.", 
                             "I become 1 percent better every day."};//Should I change these positive affirmations?

    int randomNum = rand() % 16;

    cout << affirmations[randomNum] << endl;
}
