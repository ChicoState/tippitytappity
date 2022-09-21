#include <iostream>
<<<<<<< HEAD
#include <string>
=======
#include <chrono>
>>>>>>> fcb05bf7d17a5f68403a8b2a3218ec99efabc115

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
<<<<<<< HEAD
    int numCorrect, score;
=======
    std::chrono::steady_clock::time_point started; 
    std::chrono::steady_clock::time_point stopped;
    long milliseconds = 0;

>>>>>>> fcb05bf7d17a5f68403a8b2a3218ec99efabc115
    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;
        started = std::chrono::steady_clock::now(); // start timer
        getline(cin,input);
        stopped = std::chrono::steady_clock::now(); // stop timer
        milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(stopped - started).count();
        
        //TODO: Show results here
<<<<<<< HEAD
        for (int i = 0; i < input.length(); i++){
            if (phrase[i] == input[i]) numCorrect++;
        }
        score = (numCorrect * 100) / 44;
        score -= phrase.length() > input.length() ? (phrase.length() - input.length()) * 2 : (input.length() - phrase.length()) * 2;
        cout << "Results: " << score << "%" << " accurate" << endl;
=======
        cout << "You took " << milliseconds / 1000.0 << " seconds" << endl;

>>>>>>> fcb05bf7d17a5f68403a8b2a3218ec99efabc115
        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}