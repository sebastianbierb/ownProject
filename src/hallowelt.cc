#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv){
    enum languages {german, english, french};
    std::string greetings[3] = {"Hallo Welt!", "Hello world!", "Salut monde!"};
    languages lang = french;
    std::cout << greetings[lang] << std::endl;
    return 0;
}
