#include <iostream>
using namespace std;

int main() {
    // Choices array
    string choices[] = {"Stone", "Paper", "Scissor"};

    // Get user choice
    cout << "Enter your choice (0 for Stone, 1 for Paper, 2 for Scissor): ";
    int userChoice;
    cin >> userChoice;

    // Validate user choice
    if (userChoice < 0 || userChoice > 2) {
        cout << "Invalid choice. Please enter 0, 1, or 2." << endl;
        return 1;
    }

    // Get computer choice (manual input for simplicity)
    cout << "Enter the computer's choice (0 for Stone, 1 for Paper, 2 for Scissor): ";
    int computerChoice;
    cin >> computerChoice;

    // Validate computer choice
    if (computerChoice < 0 || computerChoice > 2) {
        cout << "Invalid choice. Please enter 0, 1, or 2." << endl;
        return 1;
    }

    // Display choices
    cout << "You chose: " << choices[userChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    // Determine and display result
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } 
    
    else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } 
    
    else {
        cout << "You lose!" << endl;
    }

return 0;
}
