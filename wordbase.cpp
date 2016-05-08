#include "wordbase.h"
#include "word.h"

template<typename T>
void Mapwordbase:: read_data(string goal)
{
    ifstream fina(goal);
        if(!fina){
        if(goal == "Old_word_base")
        {
            ifstream fin("dictionary.txt")        
            sring a, b;
            
            while(!fin.eof())
            {
                getline(fin, a, ' ');
                getline(fin, b, '\n');
                T * word = new T(a, b);
                this -> add_word(word);
            }
            fin.close();
        }
        }
        else
        {
            sring a, b, c;
            while(!fina.eof())
            {
                getline(fina, a, ' ');
                if(fina.eof())
                    break;
                getline(fina, b, '|');
                //添加句子数
                fina >> sen_num;
                vector <string> s;
                for (int i = 0; i < sen_num; i ++)
                {
                    getline(fina, c, '|');
                    s.push_back(c);
                }
                T * word = new T(a, b, c);
                this -> add_word(word);           
            }
            fina.close();
        }
}

template<typename T>
void Mapwordbase:: write_data(string goal)
{
     ofstream fout(goal);
     map<string, T*> :: iterator t;
     for(t = words.begin(); t != words.end(); t++)
        t -> second -> write();          
     fout.close();    
}

template<typename T>
void Mapwordbase:: search_word(string word)
{
   words.count(word) -> translate();  
}

template<typename T>
void Mapwordbase:: add_word(T* word)
{
    words.insert(pair<string, T*>(word->getword, word));
}

template<typename T>
void Mapwordbase:: remove_word(string word)
{
    words.erase(word);
}