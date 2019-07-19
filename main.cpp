#include <iostream>
#include <fstream>
#include <sstream>
void lackOfArgument();
void printToDo();
int main(int argc, char* argv[])
{
    if(argc == 1){
        lackOfArgument();

    }
    if (argc == 2){
        std::string argument(argv[1]);
        if(argument == "-l")
            printToDo();
    }
    return 0;
}

void lackOfArgument()
{
    std::cout << std::endl << "Command Line Todo application" << std::endl;
    std::cout << "=============================" << std::endl << std::endl;
    std::cout << "Command line arguments:" << std::endl << "    -l   Lists all the tasks" << std::endl;
    std::cout << "    -a   Adds a new task" << std::endl << "    -r   Removes an task" << std::endl;
    std::cout << "    -c   Completes an task" << std::endl;
}

void printToDo()
{
    std::ifstream file("../README.md");
    if (file.is_open()) {
        std::string line;
        if (line.size() == 0){
            std::cout <<"No todos for today! :)" << std::endl;
        }
        int numberOfTodo = 1;
        std::cout << std::endl;
        while(std::getline(file, line)) {
            std::istringstream ss(line);
            std::string whatToDo;
            std::getline(ss, whatToDo, '\n');
            std::cout << numberOfTodo++ << " - ";
            std::cout << whatToDo << std::endl;
        }
        file.close();
    }
}