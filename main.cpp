#include <iostream>
#include <chrono>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    std::chrono::steady_clock::time_point started; 
    std::chrono::steady_clock::time_point stopped;
    long milliseconds = 0;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;
        started = std::chrono::steady_clock::now(); // start timer
        getline(cin,input);
        stopped = std::chrono::steady_clock::now(); // stop timer
        milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(stopped - started).count();
        
        //TODO: Show results here
        double percentage = phrase.size();
        //cout << "percentage equals: " << percentage << endl;
        double correct = 0.0;
        double resultPercentage = 0.0;
        if (input == phrase){
            cout << "You typed everything correct! 100%!" << endl;
        } else {
            for (int i = 0; i < input.size(); i++) {
                if (input[i] = phrase[i]) {
                    //cout << "Added 1 to correct" << endl;
                    correct++;
                }
            }
            //cout << "Value of correct is: " << correct << endl;
            //cout << "Value of percentage is: " << percentage << endl;
            resultPercentage = (correct/percentage) * 100;
            //cout << "Calculated Percentage is: " << correct/percentage * 100 << endl;
        }
        cout << "You got the phrase " << resultPercentage << " percent correct" << endl;
        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}