#include <iostream>
#include <math.h>
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
        double numPhrase = phrase.length();
        double numInput = input.length();

        if (input == phrase) {
          cout << "Results: 100% accurate" << endl;
        } else if (phrase.length() == input.length()){
          double results = (numInput/numPhrase * 100);
          cout << "Results: " << std::floor(results) << "% accurate" << endl;
        } else {
          int diff = phrase.length() - input.length();
          diff = diff*2;
          cout << "Results: " << 100-diff << "% accurate" << endl;
        }




        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
