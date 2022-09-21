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
            cout<<"Feature added"<<endl;


        getline(cin,input);
        

        //TODO: Show results here
        cout<<"Feature added"<<endl;
    


        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}