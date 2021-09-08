#include <iostream>
#include <string.h>

char    *uper_case(char *str)
{
  for (int i = 0; str[i]; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
  }
  return (str);
}

int main(int ac, char **argv)
{
  if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
  {
    for (int i = 1; i < ac; i++)
      std::cout << uper_case(argv[i]); 
  }
  std::cout << std::endl;
  return 0;
}
