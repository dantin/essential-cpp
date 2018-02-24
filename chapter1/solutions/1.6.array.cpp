#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  const int arr_size = 256;
  int ia[arr_size];
  int ival, icnt = 0;

  cout << "Please enter some integers: ";
  while (cin >> ival && icnt < arr_size)
    ia[icnt++] = ival;

  int sum = 0;
  for (int ix = 0; ix < icnt; ++ix)
    sum += ia[ix];

  int average = sum / icnt;
  cout << "The sum is " << sum << endl;
  cout << "The average is " << average << endl;
  
  return 0;
}
