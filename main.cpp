#include <iostream>
#include <vector>
#include <chrono>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    std::chrono::steady_clock::time_point started; 
    std::chrono::steady_clock::time_point stopped;
    long milliseconds = 0;

    do{
        cout << "Type the following phrase and then press return:\n"
            << phrase << endl;


        string ini = "The quick brown fox jumps over the lazy dog";
        getline(cin,input);

        vector<string> ans(phrase.size(),input);
        vector<string> ret(phrase.size(), phrase);
        long long total = 0;
        for(int i = 0; i < phrase.length(); i++) {
            for (int j = 0; j < input.length(); j++) {

                if (ans[i] == ret[j]) {
                    total += 1;

                }
            }
        }
        cout << total/44 << endl;


        started = std::chrono::steady_clock::now(); // start timer
        getline(cin,input);
        stopped = std::chrono::steady_clock::now(); // stop timer
        milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(stopped - started).count();
        

        //TODO: Show results here
        cout << "You took " << milliseconds / 1000.0 << " seconds" << endl;

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}

