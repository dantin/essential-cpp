#include <iostream>
#include <vector>

using namespace std;

const vector<int> *
fibon_seq(int size)
{
  const int max_size = 1024;
  static vector<int> elems;

  if (size <= 0 || size > max_size)
    {
      cerr << "fibon_seq(): oops: invalid size: "
           << size
           << " -- can't fulfill request.\n";
      return 0;
    }

    for (int ix = 0; ix < size; ++ix)
      if (ix == 0 || ix == 1)
        elems.push_back(1);
      else
        elems.push_back(elems[ix-1] + elems[ix-2]);

  return &elems;
}

void display(const vector<int> &vec)
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

  const vector<int> *vec = fibon_seq(size);
  display(*vec);

  return 0;
}
