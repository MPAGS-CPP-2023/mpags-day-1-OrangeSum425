#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
  std::string inputFileName;
  std::string outputFileName;
  const std::vector<std::string> cmdLineArgs { argv, argv+argc };

  for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "-h" || arg == "--help") {
            std::cout << "Help message: Here is a program for the day 1 course exercise 7" << std::endl;
            std::cout << "Input the password, then it will be converted to upper letter." << std::endl;
            std::cout << "Usage: " << argv[0] << " [options] [arguments]" << std::endl;
            return 0; 
        }
        else if(arg == "--version"){
          std::cout << "Program version: 0.1.0 (For the day 1 course)." << std::endl;
          return 0;
        }
        else if(arg == "-i"){ if (i + 1 < argc) {
                inputFileName = argv[i + 1];
                std::cout << "Input file: " << inputFileName << std::endl;
                i++;  
            } else {
                std::cerr << "Error: -i option requires an input file." << std::endl;
                return 1;
            }}
        else if(arg == "-o"){ if (i + 1 < argc) {
                outputFileName = argv[i + 1];
                std::cout << "Output file: " << outputFileName << std::endl;
                i++;  
            } else {
                std::cerr << "Error: -o option requires an output file." << std::endl;
                return 1;
            }       
        }
        else{
          std::cout << "Argument " << i << ": " << argv[i] << std::endl; //If no option
        }
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
