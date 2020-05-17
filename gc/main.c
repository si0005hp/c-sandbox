#include <gc.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  char *a;
  while (1)
  {
    int i;
    for (i = 0; i < 10000; i++)
      a = (char *)GC_MALLOC(100);

    usleep(1);
  }

  return 0;
}
