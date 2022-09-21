#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    int numCorrect, score;
    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);

        //TODO: Show results here
        for (int i = 0; i < input.length(); i++){
            if (phrase[i] == input[i]) numCorrect++;
        }
        score = (numCorrect * 100) / 44;
        score -= phrase.length() > input.length() ? (phrase.length() - input.length()) * 2 : (input.length() - phrase.length()) * 2;
        cout << "Results: " << score << "%" << " accurate" << endl;
        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}