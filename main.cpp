#include <iostream>
#include <cmath>

using namespace std;

//Declare and initalize variables
int main() {
    string answer_1("Apple");
    string answer_2("Samsung");
    string answer_3("LG");
    string answer_4("One Plus");
    string answer_5("Huawei");
    string answer_6("Google");

    char answer;
    const char YES('Y');
    const char NO('N');
    bool quit(false);
    char play_again;

    //print user greeting
    cout << "Pick a phone brand from the following list." << endl;
    cout << "" << endl;
    cout << "Apple   Samsung   LG" << endl;
    cout << "Huawei   Google  One Plus" << endl;
    cout << "" << endl;
    cout << "Keep the brand name in your head" << endl;
    cout << "Do you have a brand name in mind? (Y/N)" << endl;
    cin >> answer;
    do{         // do-while loop to loop through the program
        switch (toupper(answer)) {              //Switch function to decide based on Yes or No from user
            case YES:
                cout << "Time to begin" << endl;
                cout << "-------------------------------------------" << endl;
                cout << "Which country did your brand originate in?" << endl;      //question
                cout << "USA--->U " << " Korea--->K " << " China--->C " << endl;
                cout << "-------------------------------------------" << endl;
                cin >> answer;
                switch (toupper(answer)) {          //Switch function to decide based on country
                    case 'U':                                                   //USA chosen
                        cout << "Does your brand produce ipads(Y/N)" << endl;
                        cout << "-------------------------------------------" << endl;
                        cin >> answer;
                        switch (toupper(answer)) {
                            case 'Y':                           //Switch function based on yes or no
                                cout << "You picked " << answer_1 << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again)== NO)   //to stop the program
                                {
                                    quit = true;
                                }

                                break;
                            case 'N':
                                cout << "You picked " << answer_6 << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again) == NO)      //to stop the program
                                {
                                    quit = true;
                                }
                                break;
                            default:
                                cout << "Do not support " << answer << " as a valid input" << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again) == NO)      //to stop the program
                                {
                                    quit = true;
                                }
                                break;
                        }
                        break;

                    case 'C':                                                           //China chosen
                        cout << "Is your brand banned in the US?(Y/N)" << endl;
                        cout << "-------------------------------------------" << endl;
                        cin >> answer;
                        switch (toupper(answer)) {
                            case 'Y':
                                cout << "You picked " << answer_5 << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again) == NO)      //to stop the program
                                {
                                    quit = true;
                                }

                                break;
                            case 'N':
                                cout << "You picked " << answer_4 << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again) == NO)      //to stop the program
                                {
                                    quit = true;
                                }

                                break;
                            default:
                                cout << "Do not support " << answer << " as a valid input" << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again) == NO)      //to stop the program
                                {
                                    quit = true;
                                }

                                break;
                        }
                        break;

                    case 'K':                                                           //Korea chosen
                        cout << "Does your brand produce phones under the Galaxy moniker(Y/N)" << endl;
                        cout << "-------------------------------------------" << endl;
                        cin >> answer;
                        switch (toupper(answer)) {
                            case 'Y':
                                cout << "You picked " << answer_2 << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again) == NO)      //to stop the program
                                {
                                    quit = true;
                                }
                                break;
                            case 'N':
                                cout << "You picked " << answer_3 << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again) == NO)      //to stop the program
                                {
                                    quit = true;
                                }
                                break;
                            default:
                                cout << "Do not support " << answer << " as a valid input" << endl;
                                cout << "Do you want to play again" << endl;
                                cin >> play_again;
                                if (toupper(play_again)== NO)           //to stop the program
                                {
                                    quit = true;
                                }
                                break;
                        }
                        break;

                    default:                                                    //When the program cant guess
                        cout << "You beat me I can't guess the brand" << endl;
                        cout << "Or you cheated and picked something off the list!" << endl;
                        cout << "Do you want to play again" << endl;
                        cin >> play_again;
                        if (toupper(play_again) == NO)
                        {
                            quit = true;
                        }

                }
                break;

            case NO:                        //If user indicates they didnt choose a brand
                cout << "You don't want to play the game :(" << endl;
                cout << "Do you want to play again" << endl;
                cin >> play_again;
                if (toupper(play_again)== NO)
                {
                    quit = true;
                }
                break;

            default:                    //if user enters invalid input
                cout << "Do not support " << answer << " as a valid input" << endl;
                cout << "Do you want to play again" << endl;
                cin >> play_again;
                if (toupper(play_again) == NO)
                {
                    quit = true;
                }
                break;

        }
    }

    while (quit=!true); // do-while loop to loop through the program


    return (0);

}



