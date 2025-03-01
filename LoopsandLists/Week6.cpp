//Aiden Kimball week 6 2-25-25
// Loops and lists
#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* const int MAX_SIZE = 10; // cannot be changed after this line, all caps represents constant variables
    int element = 0; // keeps track of array position
    int scores[MAX_SIZE]; // created 10 spots for integers
    int loopCounter = 0;

    //setting value to the first element of the array
    scores[element++] = 9001;
    scores[element++] = 682;
    scores[element++] = 1;
    scores[element++] = 12;
   
    while (loopCounter < element)
    {
        cout << scores[loopCounter] << endl;
        loopCounter++;
    }

    for (loopCounter = 0; loopCounter < element; loopCounter++)
    {
        cout << scores[loopCounter] << endl;
    } */
    
    /*
    //create an array of strings named best friends
    string names[MAX_SIZE];
    string input;
    int friendCounter = 0;
    element = MAX_SIZE;
    do
    {
        cout << "Who are your best friends?\n";
        cout << "Or type 'quit' to exit\n";
        getline(cin, input);
        if (input == "quit")
        {
            cout << "Thanks for adding names to the list!";
            break;
        }
        if (friendCounter >= MAX_SIZE)
        {
            cout << "You've hit max size\n";
        }
        names[friendCounter++] = input;
    } while (friendCounter < MAX_SIZE);
    cout << "Here is a list of your best friends\n";
    for (int i = 0; i < friendCounter; i++)
    {
        cout << i + 1 << ".\t";
        cout << names[i] << endl;
    } */

    /*PseudoCode for fav games
    *   Setup
    * int element = 0;
    * string favGames[element]
    * int gameCount = 0;
    * start loop
    * 
        0. greet player and ask for input

        cout << "Welcome to the FavGames program. Please type add, edit, remove, show, or quit to continue."
        getline(cin, input);
        
        1. Add
            ask the player what name they want to add
            get input
            add that name to the array and increment gamecount

            if(input == "add")
            {
                
            }

        2. Edit
            use an if statement to test if input is "edit"
            if it is ask what name would need to be edited
            ask play for name to edit
            loop to find name 
            use if statement if its found or not
            set input = to players new input
        3. Remove
        use an if statement to test if input is "remove"
            ask name to be removed
            loop to find name
            use an if statement to determine if the name was found
            if name was found set index to 0?

            continue; //stop code here and go to the next loop

        4. Show
            use an if statement to test if input is "show"
            loop through the array to print out names with numbers
            starting at 1 to ignore removed elements
        5. Quit
            use and if statement to test the input == "quit"
            if it is then break
    */
    const int MAX_GAMES = 11;// max of 11 not 10 because 0 is deleted options
    string input = "";
    string favGames[MAX_GAMES]; // Array to store games
    int gameCount = 0; // Track number of games stored

    cout << "Welcome to the FavGames program.\n";

    while (true) {
        cout << "Please type add, edit, remove, show, or quit to continue.\n";
        getline(cin, input);

        if (input == "add") {
            if (gameCount < MAX_GAMES) {
                cout << "What game would you like to add?\n";
                getline(cin, favGames[++gameCount]);
            }
            else {
                cout << "Game list is full!\n";
            }
        }
        else if (input == "edit") {
            cout << "What game would you like to edit?\n";
            getline(cin, input);
            bool found = false;
            for (int i = 0; i < gameCount; i++) {
                if (favGames[i] == input) {
                    cout << "Game found. What will the edit be?\n";
                    getline(cin, favGames[i]);
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Game not found.\n";
            }
        }
        else if (input == "remove") {
            cout << "Which game would you like to remove?\n";
            getline(cin, input);
            bool found = false;
            for (int i = 1; i < gameCount; i++) {
                if (favGames[i] == input) {
                    cout << "Game found, removing.\n";
                    favGames[i] = favGames[0]; //0 is the deleted area
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Game not found.\n";
            }
        }
        else if (input == "show") {
            cout << "Showing the current list:\n";
            for (int i = 1; i <= gameCount; i++) {
                cout << favGames[i] << endl;
            }
        }
        else if (input == "quit") {
            cout << "Quitting program.\n";
            break;
        }
        else {
            cout << "Invalid input. Please try again.\n";
        }
    }
    return 0;
}

