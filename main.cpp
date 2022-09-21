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
        int count = 0;
        //itterate trhough phrase and compare it to input
        for(int i = 0; i < phrase.size(); i++){
          if(phrase[i] == input[i]){
            //add 100 per correct input to avoid decimals
            count+=100;
          }
        }
        //calculate percent
        count = count / phrase.size();
        //displays results
        cout << "Results: " << count << "% accurate"<< endl;

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
