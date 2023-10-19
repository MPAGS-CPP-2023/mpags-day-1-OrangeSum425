#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    // The first argument (argv[0]) is the program name itself, so we start from index 1
  for (std::size_t i{0}; i < cmdLineArgs.size(); i++) {
        std::cout << cmdLineArgs[i] << std::endl;
    }
    
    return 0;
}