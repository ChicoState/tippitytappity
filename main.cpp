#include <iostream>
#include <chrono>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    std::chrono::steady_clock::time_point started; 
    std::chrono::steady_clock::time_point stopped;
    long milliseconds = 0;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;
        started = std::chrono::steady_clock::now(); // start timer
        getline(cin,input);
        stopped = std::chrono::steady_clock::now(); // stop timer
        milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(stopped - started).count();
        
        //TODO: Show results here
        cout << "You took " << milliseconds / 1000.0 << " seconds" << endl;
	
	int size;
	if (phrase.length() > input.length()){
		size = input.length();
	} else {
		size = phrase.length();
	}

	bool wrongLetter = true;
	for (int i = 0; i < size; i++){
		if (phrase.at(i) != input.at(i)){
			wrongLetter = false;
			cout << input.at(i) << " typed instead of " << phrase.at(i) << endl;
	}

	if (wrongLetter == true){
		cout << "You got the entire phrase correct!" << endl;
	}

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
