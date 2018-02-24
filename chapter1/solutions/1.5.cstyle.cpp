#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
  const int nm_size = 256;
  char userName[nm_size];

  cout << "Please enter your name: ";
  cin >> setw(nm_size) >> userName;

  if (strlen(userName) <= 2)
    cout << "Your name is too short!" << endl;
  else
    cout << "Nice name, hello " << userName << '!' << endl;

  return 0;
}
