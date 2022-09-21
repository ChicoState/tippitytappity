#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int SIZE = 43;
int main(){
	const string phrase = "The quick brown fox jumps over the lazy dog";
	string input;
	string count = 43;
	int score = 100;
	do{
		cout << "Type the following phrase and then press return:\n" 
			<< phrase << endl;

		getline(cin,input);

		//TODO: Show results here
		if(SIZE != input.size())
		{
			for(int i = 0; i < SIZE; i++)
			{
				if(phrase[i] != input[i])
					count--;
			}
			score = (count/SIZE)*100;
		}
		else
		{
			if(input.size() < SIZE)
				score = 100 - (SIZE - input.size());
			else
				score = 100 - (input.size() - SIZE);
		}

		cout<<"Results: "<<score<<"% accurate"<<endl;

		do{
			cout << "Try again? (yes/no)\n";
			getline(cin,input);
		}while( input != "yes" && input != "no" );
	}while( input == "yes" );

	return 0;
}
