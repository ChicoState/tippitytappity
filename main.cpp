#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    const string phrase2 = "The quick brown fox jumps ov the lay dog";
    string input;
    int vSz;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase <<phrase2 << endl;

        getline(cin,input);
        

        //TODO: Show results here
        if(phrase == phrase2)
        cout << "100% Similarity!";
    else{
            if(phrase > phrase2)
             vSz = phrase2.size();
        else
             vSz = phrase.size();

        for(int i = 0; i != (vSz);++i){
            if(phrase[i] == phrase2[i])
                ++i;}
        }
    cout << "Strings have " << vSz << " characters in common. " << phrase 
            << " is " << phrase.size() << " characters long and " << phrase2 << " is " 
            << phrase2.size() << " long." << endl;


        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}