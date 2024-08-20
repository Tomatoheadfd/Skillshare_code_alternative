#include <iostream>
#include <vector>

using namespace std;




// STUDY THIS SHIT





int main()
{
double input;
    // cout << highest_level << endl;
 vector<double> player_levels = {};
    cout << "Submit all your clan member levels (Enter -1 to submit): ";
    
    //Not sure why I can just get away with writing "true" here and still have the code fully function like the correct awnser from the course
    while (true)  // While if you don't know how many variables you will have
    {
    cin >> input;
    if (input == -1){
        break;
    }
    player_levels.push_back(input);
    }

double highest_level = player_levels[0];  // Initialize with the first element

    // Iterate through each level in the vector
    for (double level : player_levels) {                                                            //The : is specific to the syntax of range-based for loops and indicates that the loop should iterate over the elements of the container.
        // If the current level is greater than the highest level found so far, update it
        if (level > highest_level) {
            highest_level = level;
        }
    }
cout << "Your clans highest level member is level " << highest_level << endl; //Print highest value


    return 0;
}
