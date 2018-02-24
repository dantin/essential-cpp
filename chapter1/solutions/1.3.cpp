#include <iostream>
#include <string>

using namespace std;

int my_main(int argc, char *argv[])
{
  string user_name;

  cout << "Please enter your first name: ";
  cin >> user_name;
  cout << endl << "Hello, " << user_name << " ... and goodbye!" << endl;

  return 0;
}
