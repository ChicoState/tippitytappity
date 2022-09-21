#include <iostream>
#include <cstring>

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
	
	int n = phrase.length();
	char p[n+1];
	strcpy(p, phrase.c_str());

	char inp[n+1];
	strcpy(inp, input.c_str());
	

	double num_correct=0;
	double percent;

	if(input == phrase){
		cout << "Results: 100% accurate" << endl;
	}else{
		for(int i=0; i < 43; i++){
			if(inp[i] == p[i]){
				num_correct++;
			}
		}
		percent = num_correct/43 * 100;
		cout << "Results: " << percent << "% accurate" << endl; 
}
			

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
