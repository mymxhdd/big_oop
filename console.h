#ifndef CONSOLE_H
#define CONSOLE_H
#include "wordbase.h"
#include "learn_stragety.h"
#include "word.h"
class console{
public:
    virtual void start() = 0;
    virtual void get_wordbase(wordbase<word*> * base) = 0;
    virtual void test() = 0;
    virtual void change_learn_stragety(learn_stragety * sty) = 0;
    virtual void learn() = 0;
    virtual void search_word(string word) = 0;
    virtual void search_txt() = 0;
    virtual addsentence(string word, string sentence) = 0;
    virtual ~console();
};

class my_console : public console{
    view * _view,  wordbase<word*> _base, learn_stragety * _sty;   
public:
    void start() = 0;
    void get_wordbase(wordbase<word*> * base);
    void test();
    void change_learn_stragety(learn_stragety * sty);
    void learn();
    void search_word(string word);
    void search_txt();
    void addsentence(string word, string sentence);      
}; 

#endif