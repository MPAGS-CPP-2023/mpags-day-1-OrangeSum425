#include <iostream>
#include <string>
int main()
{
  char in_char{'x'};
  std::string out_str{""};

  // Take letter from input:
  while(std::cin>>in_char)
  {
    if(std::isalpha(in_char))
    {
      out_str+=std::toupper(in_char);
    }
  }
  std::cout << out_str << std::endl;
}
