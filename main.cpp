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
	int correct=0;
	for(int i=0; i<input.size(); i++){
		for(int k=0; k<phrase.size(); k++){
			if(input[i]==phrase[k]){
				correct++;
		}
	}
	int grade = (correct/44)*100;
	cout << grade << endl;

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
