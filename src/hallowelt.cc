#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv){
    enum languages {german, english, french, spanish};
    string greetings[4] = {"Hallo Welt!", "Hello world!", "Salut monde!", "Ich kein spanisch kann"};
    languages lang = french;
    cout << greetings[lang] << endl;
    return 0;
}
