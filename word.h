#ifndef WORD_H
#define WORD_H
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct general
{
    string _word;
    string _translation;
    string * _sentence;
    general(string word, string translation, string * sentence = NULL) : _word(word), 
    _translation(translation), _sentence(NULL) { }
    general() {}
};

class word
{
public:
    virtual void show() = 0;
    virtual void translate() = 0;
    virtual void learn() = 0;
    virtual void test() = 0;
    virtual void addsentence() = 0;
    virtual ~word() {}
};


class old_word : public word {
    general * oldword;
public:
    old_word(string tword, string translation, string * sentence = NULL): oldword -> general(tword, translation, sentence) {}
    void show();
    void translate();
    void learn();
    void test();
    void addsentence();
};


class rare_word : public word {
   general * rareword
public:    
    rare_word(string tword, string translation, string * sentence = NULL): rareword -> general(tword, translation, sentence) {}
    void show();
    void translate();
    void learn();
    void test();
    void addsentence();
};


class familiar_word : public word {
    general * familiarword;
public:
    familiar_word(string tword, string translation, string * sentence = NULL): familiarword -> general(tword, translation, sentence) {}
    void show();
    void translate();
    void learn();
    void test();
    void addsentence();
};

class forget_word : public word {
    general * forgetword;
public:
    forget_word(string tword, string translation, string * sentence = NULL): forgetword -> general(tword, translation, sentence) {}
    void show();
    void translate();
    void learn();
    void test();
    void addsentence();
};
#endif