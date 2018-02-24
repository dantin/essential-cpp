#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
  vector<string> vecName(2);

  cout << "Please enter your first name: ";
  cin >> vecName[0];
  cout << "Please enter your last name: ";
  cin >> vecName[1];
  for (vector<string>::iterator iter = vecName.begin(); iter != vecName.end(); ++iter) {
    cout << *iter << " ";
  }
  cout << endl;

  return 0;
}
