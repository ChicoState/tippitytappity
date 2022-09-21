#include <iostream>
#include <string.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
	int stringsize = 44;//length of phrase including newline
	int score;
    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);
		//reset or set score counter
		score = 0;
       /*

 		//doesn't work with strings fix later	
		if (strlen(input) < 44){
			score -= 44 - (strlen(input))
		}else if(strlen(input) > 44){
			score -= 2 * (strlen(input) - 44)
		}
		*/

		//check chars and add to score with each correct char
		for(int iter = 0; iter < stringsize; iter++){
			if (input[iter] == phrase[iter]){
				score++;	
			}
		}
		//debugg 
		cout << score << endl;	
		//print score result
		cout << "Results: " << score*100/stringsize << "\% accurate\n"; 
        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
