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
	cout << "What you typed: " << input << endl;
	cout << "What you were supposed to typed: " << phrase << endl;
	if(phrase == input){
		cout << "You win!\n";
	}else{
		cout << "You lose ;(\n";
	}

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
