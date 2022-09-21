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
        //for every character we did not get correct we multiply correct/total * 100
        int correct = 0;
        int total = 0;
        for(int i = 0; i < phrase.length(); i++){
            if(phrase[i] == input[i]){
                correct++;
            }
            total++;
        }
        int score = (correct/total) * 100;
         //if too many character or too few we subtract 2 points for each
        if(input.length() > phrase.length() || input.length() < phrase.length()){
            score -= 2 * abs((int)input.length() - (int)phrase.length());
        }
        cout << "Your score is: " << score << endl;


        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}