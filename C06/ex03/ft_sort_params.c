#include <unistd.h>

int main(void) 
{
  char args[3][3] = {"abc", "def", "ghi"};

  int i = 0;
  int j = 0;
  while (args[i][j]) 
  {
    j = 0;
    while (args[i][j]) 
	{
      write(1, &args[i][j], 1);
      j++;
    }
    write(1, "\n", 1);
    i++;
  }

  return 0;
}