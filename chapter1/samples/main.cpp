#include "ch1.h"

int main()
{
  user_profile up;

  if ( greet_user(&up))
    {
      play_game(&up);
      display_statistics(&up);
    }

  return 0;
}
