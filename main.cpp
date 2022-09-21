#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int checker(string s1, string s2)
{
  int counter = 0;
  for(int i = 0; i < s2.length(); i++)
  {
    if(s1[i] == s2[i])
      counter++;
  }
  return counter;
}

int main(){
    const string phrase = "The quick brown fox jumps over the lazy dog";
    string input;

    do{
        cout << "Type the following phrase and then press return:\n"
            << phrase << endl;

        getline(cin,input);

        //TODO: Show results here
        int shortest = (phrase.length() >= input.length()) ? 0 : 1;
        int difference = phrase.length() - input.length();
        if(difference < 0)
          difference *= -1;
        int num_correct;
        if( shortest == 0)
        {
          num_correct = checker(phrase, input);
        }
        else
        {
          num_correct = checker(input, phrase);
        }
        double percentage = (double)num_correct / (double)phrase.length();
        percentage = percentage*100;
        percentage += -2*difference;
        printf("You got a score of %d\%\n", (int)percentage);
        do{
            cout << "Try again? (yes/no)\n";
            getline(cin,input);
        }while( input != "yes" && input != "no" );
    }while( input == "yes" );

    return 0;
}
