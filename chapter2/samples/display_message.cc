#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename elemType>
void
display_message(const string &msg,
                const vector<elemType> &vec)
{
  cout << msg;
  for (int ix = 0; ix < vec.size(); ++ix)
    {
      elemType t = vec[ix];
      cout << t << ' ';
    }
  cout << endl;
}

int
main(int argc, char *argv[])
{
  int ia[] = { 8, 34, 3, 13, 1, 21, 5, 2};
  vector<int> ivec(ia, ia+8);

  display_message("int vector: ", ivec);

  string sa[] = { "hello1", "here2", "bye3" };
  vector<string> svec(sa, sa+3);

  display_message("string vector: ", svec);

  return 0;
}
