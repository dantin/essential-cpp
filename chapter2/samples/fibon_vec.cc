#include <iostream>
#include <vector>

using namespace std;

vector<int> fibon_seq(int size);
void display(vector<int> &vec)
{
  for (int ix = 0; ix < vec.size(); ++ix)
    cout << vec[ix] << ' ';
  cout << endl;
}

int main(int argc, char *argv[])
{
  int size;
  cout << "Please enter a size: ";
  cin >> size;

  vector<int> vec = fibon_seq(size);
  display(vec);

  return 0;
}

vector<int>
fibon_seq(int size)
{
  if (size <= 0 || size > 1024)
    {
      cerr << "Warning: fibon_seq():  "
           << size
           << " not supported -- resetting to 8\n";
      size = 8;
    }

  vector<int> elems(size);

  for (int ix = 0; ix < size; ++ix)
    if (ix == 0 || ix == 1)
      elems[ix] = 1;
    else
        elems[ix] = elems[ix-1] + elems[ix-2];

  return elems;
}
