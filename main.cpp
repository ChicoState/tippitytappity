#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    double score = 0;

    do{
        score = 0;
        cout << "Type the following phrase and then press return:\n"
            << phrase << endl;

        getline(cin,input);

        for(int i = 0; i < input.size(); i++)
        {
          if(input[i] == phrase[i])
          {
            score++;
          }
        }

        score = (int)((score/phrase.size())*100);
        int extraLetters = abs(phrase.size() - input.size());
        score -= extraLetters * 2;

        cout << "Results: " << score << "% accurate" << endl;

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
