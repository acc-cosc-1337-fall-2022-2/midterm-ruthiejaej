
#include "question4.h"
#include <iostream>
using std::cin; 
using std::cout; 
using std::string;

int main()
{
    string DNA;
    cin >> DNA;
    cout << transcribe_dna_to_rna(DNA); 
    
    return 0;
}
