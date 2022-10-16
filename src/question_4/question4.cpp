
#include "question4.h"

bool test_config()
{
    return true;
}
string transcribe_dna_to_rna(string DNA)
{
    cout << "FROM DNA TO RNA\n";
    cout << "\nDNA IS: ";

    //string DNA;
    cin >> DNA;

    cout << "RNA IS: ";
    //std::transform(sequence.begin(), sequence.end(), sequence.begin(),) //::toupper);
    
    for (size_t i = 0; i < DNA.size(); i++)
    {
        switch (DNA[i])
        {
        case 'A':
            cout << 'A';
            break;
        case 'C':
            cout << 'C';
            break;
        case 'G':
            cout << 'G';
            break;
        case 'T':
            cout << 'U';
            break;
            
        }
    }
return 0;
}