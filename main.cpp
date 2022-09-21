#include <iostream>
#include <cstring>
#include <string>
#include <chrono>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    std::chrono::steady_clock::time_point started; 
    std::chrono::steady_clock::time_point stopped;
    long milliseconds = 0;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;
        started = std::chrono::steady_clock::now();
        getline(cin,input);
        stopped = std::chrono::steady_clock::now(); // stop timer
        milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(stopped - started).count();
        //TODO: Show results here
        cout << "You took " << milliseconds / 1000.0 << " seconds" << endl;
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