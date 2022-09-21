#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;

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

        //TODO: Show results here

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}

