#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main () { 
    cout << fs::current_path().string() << endl;
    //fs::create_directory("tests");
    if(fs::exists(fs::current_path().string() + "\tests")){
        cout << "Achei!";
    }
    else{
        cout << "Não achei!";
    }

    return 0;
}