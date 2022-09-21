#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    int bestScore;
    int finalScore;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);
        
        //TODO: Show results here        
        
        bestScore = 43;
        finalScore = 43;
        
        finalScore += (input.length() - 43) * 2;
        
        for(int i = 0; i < phrase.length(); i++){
            if(phrase[i] != input[i]){
                finalScore++;   
            }
        }
        
        finalScore = bestScore / finalScore * 100;
        cout << "Results: " << finalScore << "% accurate" << endl;


        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
