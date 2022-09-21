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

        int score = 0;
        int offset = (phrase.length() - input.length()) * 2;
        if (offset > 0)
            offset = -offset;
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == phrase[i])
                score++;
        }
        
        int final_score = score/phrase.length() + offset;
        cout << "Results :" << final_score << "% accurate" << endl;

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
