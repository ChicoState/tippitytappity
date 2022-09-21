#include <iostream>
#include <cstring>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);

        //TODO: Show results here
        //code
        if(phrase.compare(input) == 0){
            cout << "100%" << endl;
        }
        else{
            char check[phrase.length()]={};
            char phr[phrase.length()]={};
            strcpy(check, input.c_str());
            strcpy(phr, phrase.c_str());
            int mistake = 0;
            int per = 0;
            
            for(int i = 0; i < phrase.length(); i++){
                
                
                if(check[i]!=phr[i]){
                    mistake++;
                }
            }
            per = (43-mistake)*100/phrase.length();
            cout << per <<"%"<< endl;
        }

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}