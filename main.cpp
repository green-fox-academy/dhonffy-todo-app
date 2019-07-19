#include <iostream>

int main(int argc, char* argv[])
{
    if(argc == 1){

        std::cout << "$ todo" << std::endl << std::endl << "Command Line Todo application" << std::endl;
        std::cout << "=============================" << std::endl << std::endl;
        std::cout << "Command line arguments:" << std::endl << "    -l   Lists all the tasks" << std::endl;
        std::cout << "    -a   Adds a new task" << std::endl << "    -r   Removes an task" << std::endl;
        std::cout << "    -c   Completes an task" << std::endl;
    }
    return 0;
}