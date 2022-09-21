#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;
    int points=44;
    string bigger;
    string smaller;
    int total=0;


    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;

        getline(cin,input);
        if(phrase.size()>input.size())
        {
            bigger=phrase;
            smaller=input;
        }
        else if(input.size()>phrase.size())
        {
            bigger=input;
            smaller=phrase;
        }
        else{

            bigger=input;
            smaller=phrase;
        }
        for(int i=0; i<bigger.size(); i++)
        {
            if (smaller[i]!=bigger[i])
            {
                points-=1;
            }

        }
        if(phrase.size()!=input.size())
        {
            points-=bigger.size()-smaller.size();
        }
        total=floor((points/44)*100);
        cout<<"results: "<<total<<"% accurate"<<endl;
        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}