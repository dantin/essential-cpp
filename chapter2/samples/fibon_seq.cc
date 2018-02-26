#include <iostream>

using namespace std;

bool print_sequence(int pos);

int main(int argc, char *argv[])
{
  int pos;
  cout << "Please enter a position: ";
  cin >> pos;


  if (!print_sequence(pos))
    {
      cout << "Sorry. Could not calculate element # "
           << pos << endl;
    }

  return 0;
}

bool
print_sequence(int pos)
{
  if (pos <= 0 || pos > 1024)
    {
      cerr << "invalid position: " << pos
           << " -- cannot handle request!\n";
      return false;
    }

  cout << "The Fibonacci Sequence for "
       << pos << " positions: \n\t";

  switch(pos)
    {
    default:
    case 2:
      cout << "1 ";
    case 1:
      cout << "1 ";
        break;
    }

  int elem;
  int n_1 = 1, n_2 = 1;

  for (int ix = 3; ix <= pos; ++ix)
    {
      elem = n_2 + n_1;
      n_2 = n_1;
      n_1 = elem;

      cout << elem << ( !(ix % 10) ? "\n\t" : " ");
    }
  cout << endl;

  return true;
}
