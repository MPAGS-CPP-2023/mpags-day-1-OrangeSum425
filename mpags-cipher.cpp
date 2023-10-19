#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    for (int i = 1; i < argc; i++) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }

  //variables
  char in_char{'x'};
  std::string out_str{""};

  // Take letter from input:
  while(std::cin>>in_char)
  {
    if(std::isalpha(in_char))
    {
      out_str+=std::toupper(in_char);
      continue;
    }

    switch (in_char)
    {
    case '0':
      out_str+="ZERO";
      break;
    case '1':
      out_str+="ONE";
      break;
    case '2':
      out_str+="TWO";
      break;
    case '3':
      out_str+="THREE";
      break;
    case '4':
      out_str+="FOUR";
      break;
    case '5':
      out_str+="FIVE";
      break;
    case '6':
      out_str+="SIX";
      break;
    case '7':
      out_str+="SEVEN";
      break;
    case '8':
      out_str+="EIGHT";
      break;
    case '9':
      out_str+="NINE";
      break;
    default:
      break;
    }
  }
  std::cout << out_str << std::endl;
}
