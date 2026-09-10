#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ifstream arq1("arquivo1.txt");
    ifstream arq2("arquivo2.txt");
    ofstream res("resultado.txt");
    // COMPLETE O CÓDIGO

    arq1.close();
    arq2.close();
    res.close();
    ifstream arq3("resultado.txt");
    while (!arq3.eof()) {
        char txt[200];
        arq3.read(txt,200);
        printf("%s\n",txt);
    }
    arq3.close();
    return 0;
}
