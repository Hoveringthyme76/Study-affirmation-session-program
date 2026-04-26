#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

//Need chrono and thread for time duration.


// STUDY TECHNIQUES TO CHOOSE FROM:
// 1. Pomodoro Technique: 25 min study, 5 min break, 3-4 sessions sends an affirmation once every 15 minutes.
// 2. 52/17 rule: 52 min study, 17 min break, 2-4 sessions sends an affirmation once every 23 minutes.
// 3. Animedoro: 60 min study, 20 min break(with or without anime), 3-4 sessions sends an affirmation once every 20 minutes.
// 4. 35/5 rule: 35 min study, 5 min break, 3-4 sessions sends an affirmation once every 16 minutes
// 5. 90/20 rule: 90 min study, 20 min break, 3 sessions sends an affirmation once every 10 minutes
// 6. 112/26 rule: 112 min study, 26 min break, 2-3 sessions sends an affirmation once every 18 minutes

int introductionStatement();

void studyCycle(int studyTechnique);
void randomAffirmation();

int main() {

    int studyTechnique = introductionStatement();
    

    string countdown[] = {"3, ", "2, ", "1, ", "Go!"};

    if(studyTechnique == 1)
    {
        for(int k = 0; k < 4; k++)
        {
            cout << countdown[k];
            this_thread::sleep_for(chrono::seconds(1));
        };
        cout << endl;
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 2)
    {
        for(int k = 0; k < 4; k++)
        {
            cout << countdown[k];
            this_thread::sleep_for(chrono::seconds(1));
        };
        cout << endl;
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 3)
    {
        for(int k = 0; k < 4; k++)
        {
            cout << countdown[k];
            this_thread::sleep_for(chrono::seconds(1));
        };
        cout << endl;
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 4)
    {
        for(int k = 0; k < 4; k++)
        {
            cout << countdown[k];
            this_thread::sleep_for(chrono::seconds(1));
        };
        cout << endl;
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 5)
    {
        for(int k = 0; k < 4; k++)
        {
            cout << countdown[k];
            this_thread::sleep_for(chrono::seconds(1));
        };
        cout << endl;
        studyCycle(studyTechnique);
    }
    else if(studyTechnique == 6)
    {
        for(int k = 0; k < 4; k++)
        {
            cout << countdown[k];
            this_thread::sleep_for(chrono::seconds(1));
        };
        cout << endl;
        studyCycle(studyTechnique);
    };

    //Mainly just a safety precaution in case the while loop on the introductionStatement() function managed to stop somehow.
    if(studyTechnique == 0)
    {
        cout << "Congradulations, you managed to break the code in a way that I didn't see coming!\n"
             << "I'm so grateful that you found a flaw in this program and you should be proud of yourself for finding it the way you did.\n"
             << "If you would like me to improve this line of code in some way, then feel free to reach out to me, so I can take a look at it." << endl;
    }
    return 0;
}


int introductionStatement() //Provides a set of instructions, when the program starts.
{

    cout << "This program will send you positive affirmations every few minutes during your desired study session.\n";
    this_thread::sleep_for(chrono::seconds(6));

    cout << "The following options are available. Please select one option, then I will explain what this option will do during your study session." << endl;
    this_thread::sleep_for(chrono::seconds(6));


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
            cout << "The classic Pomodoro study technique consists of 25 minutes of study, along with a 5 minute break.\n"
                 << "Most people can use these study cycles 2 to 4 times, which optimizes focus and productivity in short bursts.\n"
                 << "This program will send you one positive affirmation every 15 minutes, until the end of the max amount of study sessions.\n";

            cout << "Would you like to study this way? (Y/N):\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 2)
        {
            cout << "The 52/17 rule is as follows. You study for 52 minutes, while taking long 17 minute breaks.\n"
                 << "This ensures that your able to increase your concentration, while also giving you meaningful, yet rewarding,\n"
                 << "breaks to accomadate for longer work hours to allow you to work smarter and not harder for 3 to 4 sessions.\n"
                 << "This program will send you one positive affirmation every 23 minutes, until the end of your study session.\n";

            cout << "Would you like to study this way? (Y/N):\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 3)
        {
            cout << "While most animedoro techniques offer 40 minutes study sessions, this program will use the variation of the\n"
                 << "animedoro technique that includes 60 minute study sessions, along with a 20 minute break paired with an episode of your favorite anime.\n"
                 << "Using this technique helps boost motivation to study, along with preventing burnout from occuring. There are 4 sessions done here,\n"
                 << "allowing this program to send one positive affirmation every 20 minutes.\n";

            cout << "Would you like to study this way? (Y/N):\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 4)
        {
            cout << "A variation of the Pomodoro, the 35/5 technique provides 35 minutes of study and 5 minutes of a break.\n"
                 << "You may do these study cycle's every 3 to 4 times repeatedly, providing similar benefits compared with the Pomodoro technique.\n"
                 << "This program will send on positive affirmation every 16 minutes.\n";

            cout << "Would you like to study this way? (Y/N):\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 5)
        {
            cout << "The 90/20 rule involvoes 90 minutes of study, along with a 20 minute break for 3 study sessions cycled.\n"
                 << "This way of studying is optimal in any work environment, as doing this way of studying, or working, helps when it comes to\n"
                 << "increasing your work quality, as well as reduces mental fatigue. It is also possible to enter a flow state, when doing this\n"
                 << "technique. This program will send one positive affirmation every 10 minutes.\n";

            cout << "Would you like to study this way? (Y/N):\n";
            cin >> confirmApproval;
        }
        else if(playerChoice == 6)
        {
            cout << "One of the most hardest study techniques, also known as the 112/26 rule, allows you to study for 112 minutes, with breaks lasting 26 minutes.\n"
                 << "This allows you to improve your incredibly deep focus, while also improving your energy levels substaintially throughout your day.\n"
                 << "Most people find the 52/17 rule or the 90/20 rule as productive for there way of studying, so don't be discouraged if you think this technique\n"
                 << "doesn't help you the way you would like too. This program will send one positive affirmation once every 18 minutes.";

            cout << "Would you like to study this way? (Y/N):\n";
            cin >> confirmApproval;
        };



        if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 1) //I might make it so it counts down before it starts the session, but I haven't decided yet.
        {
            cout << "Then let's get started! The study session begins in: \n";
            this_thread::sleep_for(chrono::seconds(5));
            return 1;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 2)
        {
            cout << "Then let's get started! The study session begins in: \n";
            this_thread::sleep_for(chrono::seconds(5));
            return 2;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 3)
        {
            cout << "Then let's get started! The study session begins in: \n";
            this_thread::sleep_for(chrono::seconds(3));
            return 3;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 4)
        {
            cout << "Then let's get started! The study session begins in: \n";
            this_thread::sleep_for(chrono::seconds(3));
            return 4;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 5)
        {
            cout << "Then let's get started! The study session begins in: \n";
            this_thread::sleep_for(chrono::seconds(3));
            return 5;
        }
        else if((confirmApproval == 'Y' || confirmApproval == 'y') && playerChoice == 6)
        {
            cout << "Then let's get started! The study session begins in: \n";
            this_thread::sleep_for(chrono::seconds(3));
            return 6;
        }
        else
        {
            cout << "That's fair. Remember, that the goal is to study in a way that is helpful\n"
                 << "to you. Any other techniques you want to try?\n";
            this_thread::sleep_for(chrono::seconds(3));
        }
    };

    return 0;
};

void studyCycle(int studyTechnique) //Responsible for setting the proper time it takes to send one affirmation.
{
    int minutes, i;
    if(studyTechnique == 1)
    {
        for(i = 0; i < 8; i++)
        {
            minutes = 15;
            this_thread::sleep_for(chrono::minutes(minutes));
            randomAffirmation();
        };
    }
    else if(studyTechnique == 2)
    {
        for(i = 0; i < 12; i++)
        {
            minutes = 23;
            this_thread::sleep_for(chrono::minutes(minutes));
            randomAffirmation();
        };
    }
    else if(studyTechnique == 3)
    {
        for(i = 0; i < 16; i++)
        {
            minutes = 20;
            this_thread::sleep_for(chrono::minutes(minutes));
            randomAffirmation();
        };
    }
    else if(studyTechnique == 4)
    {
        for(i = 0; i < 10; i++)
        {
            minutes = 16;
            this_thread::sleep_for(chrono::minutes(minutes));
            randomAffirmation();
        };
    }
    else if(studyTechnique == 5)
    {
        for(i = 0; i < 33; i++)
        {
            minutes = 10;
            this_thread::sleep_for(chrono::minutes(minutes));
            randomAffirmation();
        };
    }
    else if(studyTechnique == 6)
    {
        for(i = 0; i < 23; i++)
        {
            minutes = 18;
            this_thread::sleep_for(chrono::minutes(minutes));
            randomAffirmation();
        };
    };
}

void randomAffirmation() //Responsible for outputing one affirmation from the affirmations array.
{
    srand(time(0));   //Puts a starting value on a random number generator

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
                             "I become 1 percent better every day."};

    int randomNum = rand() % 16;

    cout << affirmations[randomNum] << endl;
}
