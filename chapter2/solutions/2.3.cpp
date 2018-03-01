#include <iostream>
#include <string>
#include <vector>

using namespace std;

inline bool
is_size_ok(int pos)
{
  const int max_size = 1024;

  if (pos <= 0 || pos > max_size)
    {
      cerr << "invalid position: "
           << pos
           << " -- cannot handle request!\n";
      return false;
    }
  return true;
}

bool
pent_elem(int pos, vector<int> &vec)
{
  for(int ix = 1; ix <= pos; ++ix)
      vec.push_back(ix*(3*ix - 1)/2);

  return true;
}

void
print_vec(vector<int> &vec, string msg)
{
  cout << "vector of type " << msg << ": ";
  for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
    cout << *itr << ' ';
  cout << endl;
}

int
main(int argc, char *argv[])
{
  int pos;

  cout << "Please enter a position: ";
  cin >> pos;

  if (is_size_ok(pos))
    {
      vector<int> vec;
      if (pent_elem(pos, vec))
        {
          print_vec(vec, "int");
        }
      else
        {
          cout << "Sorry. Could not calculate element # "
               << pos << endl;
        }
    }

  return 0;
}
