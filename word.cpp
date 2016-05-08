#include "word.h"
void Worddo :: show(){
    cout << _word << ' ';
    vector<string>:: iterator t;
    for(t = _translation.begin(); t != _translation.end(); t++)
        cout << *t << ' ';
    cout << endl;
    if(!sentence.size())        
        for(t = _sentence.begin(); t != _sentence.end(); t++){
            cout << *t << ' ';
            cout << endl;
        }    
}

void Worddo :: translate(){
    vector<string>:: iterator t;
    for(t = _translation.begin(); t != _translation.end(); t++)
        cout << *t << ' ';
    cout << endl;    
}

void Worddo :: addsentence(string tsentence){
    _sentence.push_back(tsentence);
}


string Worddo :: getword(){
    return _word;
}

void Worddo :: write(&ofstream fout){
    fout << _word << ' ' << _translation << '|';
    vector<string> :: iterator t;
    for(t = _sentence.begin(); t != _sentence.end(); t++)
        fout << *t << '|';
    fout << endl;    
}    