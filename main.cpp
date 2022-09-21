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
        
        int correct_counter = phrase.length();

        for (int i = 0; i < phrase.length(); i++){
            if (phrase[i] != input[i]){
                correct_counter--;
            }
        }
        int diff = abs(phrase.length() - input.length());
        correct_counter = correct_counter - diff*2;
        int percent = correct_counter*100 / phrase.length();
        cout << "Results: " << percent << "%" <<  " accurate" << endl;


        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
