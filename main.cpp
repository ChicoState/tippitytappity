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
        int compare = 43; //hard coded, should be the comparison of characters but don't know how
        if (phrase == input){
            cout << "100%";
        }
        else{
            if (phrase.length() == input.length()) {
                cout << 43/compare*100;
            }
            else {
                cout << (43/compare*100);// - (|2* (phrase.length() - input.length()|)) //subtract 2 points for every extra or missing character
            }
        }

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
