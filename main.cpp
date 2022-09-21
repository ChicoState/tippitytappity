#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;



// The original phrase has 43 characters. If the user mistyped 1 character, they should get (43/44*100.0)=97.72% but only report the score as a whole number so it should show a score of 97% (no rounding).
//  Comparisons should be case sensitive, so for example 't' is NOT correct for the 'T'
//  If the user's typed phrase has either too many or too few characters, subtract 2 points from their score for each extra/missing character.
//  The results should look like: Results: 97% accurate


int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);

        int totalChars = input.length();
        int numWrong = 43;

        for(int i=0;i<totalChars;i++)
        {
            
                if(phrase[i] != input[i])
                {
                    numWrong++;
                }
            
        }
        if(input.length()!= phrase.length()){
            int charDiff = phrase.length()-input.length();
            if(charDiff >=1)
            {
                numWrong = numWrong -(charDiff*2);
            }
             if(charDiff <0)
            {
                numWrong = numWrong -((charDiff*-1)*2);
            }
        }
        cout << "Results: " << (43/numWrong*100.0) << "% accurate\n";

        //TODO: Show results here

        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}