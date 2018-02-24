#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
  ifstream inFile("text.txt");
  if (!inFile)
    {
      cerr << "Sorry, the file fails to read!" << endl;
      return -1;
    }

  string line;
  vector<string> vecLine;
  while (inFile >> line)
    vecLine.push_back(line);
  cout << "Original text: " << endl;
  for (vector<string>::iterator itr = vecLine.begin(); itr != vecLine.end(); ++itr)
    cout << *itr << ' ';
  sort(vecLine.begin(), vecLine.end());
  cout << endl << endl
       << "Sorted text: " << endl;
  for (vector<string>::iterator itr = vecLine.begin(); itr != vecLine.end(); ++itr)
    cout << *itr << ' ';
  cout << endl;

  return 0;
}
