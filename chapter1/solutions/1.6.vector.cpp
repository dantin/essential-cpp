#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
  int ival, sum = 0;
  vector<int> vecNumber;

  cout << "Please enter some integers: ";
  while (cin >> ival)
    vecNumber.push_back(ival);
  for (vector<int>::iterator itr = vecNumber.begin(); itr != vecNumber.end(); ++itr)
    sum += *itr;
  int average = sum / vecNumber.size();

  cout << "The sum is " << sum << endl;
  cout << "The average is " << average << endl;

  return 0;
}
