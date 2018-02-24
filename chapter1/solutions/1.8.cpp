#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
  const int arr_size = 5;
  static const char *messages[arr_size] = {
    "Go on, make a guess.",
    "Oops! Nice but not quite it.",
    "Oh. Sorry. Wrong again.",
    "Ah, this is harder than it looks, no?",
    "It must be getting pretty frustrating by now!"
  };


  srand(time(0));
  int num = rand() % arr_size;
  if (num < 0)
    cout << messages[0];
  else if (num >= arr_size)
    cout << messages[arr_size-1];
  else
    cout << messages[num];
  cout << endl;

  return 0;
}
