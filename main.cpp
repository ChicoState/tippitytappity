#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;

    double score;
    int result;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);

        //TODO: Show results here
    	int inputS = input.size(), phraseS = phrase.size();
	score = phraseS;
	cout << "Score orig: " << score << endl;
	if (inputS != phraseS)
		score -= 2;

	for (int i = 0; i < phraseS; i++) {
		if (i < inputS) {
			if (input[i] != phrase[i])
				score--;
		}
	}

	cout << "Score end: " << score << endl;
	result = (score / phraseS * 100.0);
	cout << "Score: " << result << endl;

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
