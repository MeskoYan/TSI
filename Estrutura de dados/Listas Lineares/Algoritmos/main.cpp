#include <iostream>
#include "ListaSequencial.h"
#include "ListaSequencial.cpp"
#include "blista.h"
#include "blista.cpp"


using namespace std;
int main() {
    ListaSequencial l;
    l.insereF(1);
    l.insereF(2);
    l.insereF(5);
    cout << l;
    cout << l[9];
    return 0;
}