#include<iostream>
#include<fstream>
#include<string>


void prompt() {
    std::string input;

    //Anti Enter spamming
    do {
        std::cout << "NIDIA CLINotebook v1.0\n"
            << "Read, Write notes !help for command information or help <command>\n\n"
            << "$: ";
        getline(std::cin, input); //Entering Enter (pun intended) will cause a blank input hence, the if statement below is true
        if (input.empty()) {
            system("cls"); //yea I know lol
        }
    } while (input.empty());
    system("cls");
}
int main() {
    while(1){
        prompt();
    }
    return 0;
}