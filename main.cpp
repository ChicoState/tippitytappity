#include <chrono>
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
  std::chrono::steady_clock::time_point started;
  std::chrono::steady_clock::time_point stopped;
  long milliseconds = 0;

  do {
    cout << "Type the following phrase and then press return:\n" << phrase << endl;
    started = std::chrono::steady_clock::now();  // start timer
    getline(cin, input);
    stopped = std::chrono::steady_clock::now();  // stop timer
    milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(stopped - started).count();

    for (int i = 0; i < phrase.length(); i++) {
      if (i < input.length() && phrase[i] != input[i]) demerit++;
      if (i >= input.length()) demerit++;
    }
    cout << "You took " << milliseconds / 1000.0 << " seconds" << endl;

    result = ((43 - demerit) / 43.0) * 100;

    cout << "Results: " << result << "% accurate" << endl;

    do {
      cout << "Try again? (yes/no)\n";
      getline(cin, input);
    } while (input != "yes" && input != "no");
  } while (input == "yes");

  return 0;
}