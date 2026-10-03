/*
15. Remova arquivos .bak

Crie um programa que remova todos os arquivos .bak da pasta atual
*/

#include <iostream>
using namespace std;
#include <filesystem>
namespace fs = std::filesystem;


int main(){

    string current_dir = ".";
    int removidos = 0;

    for(const auto& arquivo : fs::directory_iterator(current_dir)){
        if(arquivo.is_regular_file() && arquivo.path().extension() == ".bak"){
            fs::remove(arquivo.path());
            removidos++;
        }
    }

    cout << "Foram deletados: " << removidos << " arquivos";

    return EXIT_SUCCESS;
}