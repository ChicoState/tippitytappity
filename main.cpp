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

        //I CANT FINISH THE CODING PORTION BECAUSE MY VM BROKE MID WAY
        //THROUGH THE EXAM!!!
        //IT ALSO MEANS I CAN'T COMPILE IT AS WELL
        
        int results = input.length()/phrase.length()*100.0;
        printf("Results: %d accurate", results);

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}