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

        int max = phrase.length();
        int pts = phrase.length();
        for (int i = 0; i < phrase.length(); i++){
            if (input.length() >= i){
                if (input[i] != phrase[i]){
                    pts--;
                }
            }
        }
        if (phrase.length() != input.length()){
            int extras = phrase.length() - input.length();
            if (extras < 0){
                extras *= 1;
            }
            pts -= (extras * 2);
        }
        if (pts < 0){
            pts = 0;
        }
        float score = float(float(pts)/float(max));
        //TODO: Show results here
        cout << "Results: " << int(score*100) << "% accurate" << endl;

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}

