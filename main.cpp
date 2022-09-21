#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);

        //TODO: Show results here

        int accuracyPoints = 0;
        for (int i=0; i < input.length(); i++) {
            if (input[i] == phrase[i]) {
                accuracyPoints++;
            }
        }

        int total = (accuracyPoints / phrase.length()) * 100;
        cout << "Total: " << total << endl;

        int missingCharsNum = phrase.length() - input.length();
        cout << "missing chars: " << missingCharsNum << endl;
        if (missingCharsNum < 0) {
            missingCharsNum *= -1;
        }

        int missingPoints = missingCharsNum * 2;
        total -= missingPoints;

        cout << "Results: " << total << "\% accurate" << endl;

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}