#include <iostream>

using namespace std;

bool fibon_elem(int pos, int &elem);

int main(int argc, char *argv[])
{
  int pos;
  char ans = 'y';

  while (ans == 'y' || ans == 'Y')
    {
      cout << "Please enter a position: ";
      cin >> pos;

      int elem;
      if (fibon_elem(pos, elem))
        {
          cout << "element # " << pos
               << " is " << elem << endl;
        }
      else
        {
          cout << "Sorry. Could not calculate element # "
               << pos << endl;
        }

      ans = 'n';
      cout << "Would you like to try again(y/n)?";
      cin >> ans;
    }

  return 0;
}

bool
fibon_elem(int pos, int &elem)
{
  if (pos <= 0 || pos > 1024)
    {
      elem = 0;
      return false;
    }

  elem = 1;
  int n_1 = 1, n_2 = 1;

  for (int ix = 3; ix <= pos; ++ix)
    {
      elem = n_2 + n_1;
      n_2 = n_1;
      n_1 = elem;
    }

  return true;
}
