#include <iostream>
#include <chrono>

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
    

    std::chrono::steady_clock::time_point started; 
    std::chrono::steady_clock::time_point stopped;
    long milliseconds = 0;

    do{
        cout << "Type the following phrase and then press return:\n" 
            << phrase << endl;
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