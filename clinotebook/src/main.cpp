//Command Line Interface based notepad created by @LYDERBUG
/* symbol meaning
    !  : help
    <> : parameter
    [] : input
    $: : console
*/
#include<iostream>
#include<fstream>
#include<string>

//int x = 0;
void commandHelp() {
    std::cout << "This is rust\n";
    std::cin.get();
}
void prompt() {
    std::string input;
    
    //Anti Enter spamming
    do {
        system("cls");
        std::cout
            << "NIDIA CLINotebook v1.0\n"
            << "Read, Write notes !help for all command information, or !help <command>\n\n"
            << "$: ";
        getline(std::cin, input); //Entering Enter (pun intended) will cause a blank input hence, the if statement below is true
        if (!input.empty()) {
            if (input == "!help") {
                commandHelp();
            }
            else {
                system("cls"); //yea I know lol
                //continue;
            }
        }

    } while (input.empty());

    //system("cls");
}
int main() {
    while(1){
        prompt();
    }
    return 0;
}