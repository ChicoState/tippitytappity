#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    int phraselen = phrase.length();
    string input;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);

        //TODO: Show results here
        int total = 0;
        for(auto i=0; i<phraselen; i++){
            if(input[i] == phrase[i]){
                total++;
            }
        }

        cout << "Results: " << (100*total)/phraselen <<"\% accurate\n";

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}