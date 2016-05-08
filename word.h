#ifndef WORD_H
#define WORD_H
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//单词所需数据，根据需要可以进行修改
struct General
{
    string _word;
    vecotr<string> _translation;
    vector<string> _sentence;
    General(string word, string translation, string * sentence = NULL) : _word(word), 
    _translation(translation), _sentence(NULL) { }
    General() {}
};
//单词接口类
class Word
{
public:
    virtual void show() = 0;
    virtual void translate() = 0;
    virtual void learn() = 0;
    virtual void test() = 0;
    virtual void addsentence() = 0;
    virtual ~Word() {}
};


class Old_word : public Word {
    string _word;
    vecotr<string> _translation;
    vector<string> _sentence;
public:
    Old_word(string tword, vector<string> translation, vector<string> sentence): _word(tword), _translation(translation), _sentence(sentence) {}
    void show();
    void translate();
    void learn();
    void test();
    void addsentence();
};


class Rare_word : public Word {
   General * rareword;
public:    
    Rare_word(string tword, string translation, string * sentence = NULL) { rareword = new General(tword, translation, sentence); }
    void show();
    void translate();
    void learn();
    void test();
    void addsentence();
};


class Familiar_word : public Word {
    General * familiarword;
public:
    Familiar_word(string tword, string translation, string * sentence = NULL) { familiarword = new General(tword, translation, sentence); }
    void show();
    void translate();
    void learn();
    void test();
    void addsentence();
};

class Forget_word : public Word {
    General * forgetword;
public:
    Forget_word(string tword, string translation, string * sentence = NULL) { forgetword = new General(tword, translation, sentence); }
    void show();
    void translate();
    void learn();
    void test();
    void addsentence();
};
#endif