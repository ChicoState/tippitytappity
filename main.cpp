#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  const string phrase = "The quick brown fox jumps over the lazy dog";
  string input;
  int result;
  int demerit = 0;

  do {
    cout << "Type the following phrase and then press return:\n" << phrase << endl;

    getline(cin, input);

    for (int i = 0; i < phrase.length(); i++) {
      if (i < input.length() && phrase[i] != input[i]) demerit++;
      if (i >= input.length()) demerit++;
    }

    result = ((43 - demerit) / 43.0) * 100;

    cout << "Results: " << result << "% accurate" << endl;

    do {
      cout << "Try again? (yes/no)\n";
      getline(cin, input);
    } while (input != "yes" && input != "no");
  } while (input == "yes");

  return 0;
}