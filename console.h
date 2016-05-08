#ifndef CONSOLE_H
#define CONSOLE_H
#include "Wordbase.h"
#include "Learn_stragety.h"
#include "Word.h"
#include "circle_queue.h"
//控制台，所有指令都从这发出
class Console{
public:
    virtual void start() = 0;
    virtual void get_wordbase(Wordbase<word*> * base) = 0;
    virtual void test() = 0;
    virtual void change_learn_stragety(Learn_stragety * sty) = 0;
    virtual void learn() = 0;
    virtual void search_word(string word) = 0;
    virtual void search_txt() = 0;
    virtual void addsentence(string word, string sentence) = 0;//返还型？？
    virtual ~Console();
};

template<typename T1>
class My_console : public Console{
    View * _view；  Wordbase<word*> _base； Learn_stragety * _sty; MyQue<T1> * history; //我把 ‘，’改为‘；’了
public:
    void start() = 0;
    void get_wordbase(Wordbase<word*> * base);
    void test();
    void change_learn_stragety(Learn_stragety * sty);
    void learn();
    void search_word(string word);
    void search_txt();
    void addsentence(string word, string sentence);      
}; 

#endif