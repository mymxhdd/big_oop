#ifndef WORD_H
#define WORD_H
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//单词接口类
class Word
{
public:
    virtual void show() = 0;
    virtual void translate() = 0;
    virtual void learn() = 0;
    virtual void test() = 0;
    virtual void addsentence(string tsentence) = 0;
    virtual ~Word() {}
};
//因为对于不同类型单词的存储数据以及部分函数都相同，将这些提取出构成worddo，其他类继承worddo
class Worddo : public Word{
    string _word;
    vecotr<string> _translation;
    vector<string> _sentence;
    int memory;
public:
    Worddo(string tword, vector<string> translation, vector<string> sentence): _word(tword), _translation(translation), _sentence(sentence), meomry(0) {}
    Worddo(string tword, vector<string> translation): _word(tword), _translation(translation), meomry(0) {}
    void show();
    void translate();
    void addsentence();
    void test();    
};

class Old_word : public Worddo {
public:
    Old_word(string tword, vector<string> translation, vector<string> sentence): Worddo(tword, translation, sentence) {}
    Old_word(string tword, vector<string> translation): Worddo(tword, translation) {}
    void learn();
};


class Rare_word : public Worddo {
public:    
    Rare_word(string tword, vector<string> translation, vector<string> sentence): Worddo(tword, translation, sentence) {}
    Rare_word(string tword, vector<string> translation): Worddo(tword, translation) {}
    void learn();
};


class Familiar_word : public Worddo {
public:
    Familiar_word(string tword, vector<string> translation, vector<string> sentence): Worddo(tword, translation, sentence) {}
    Familiar_word(string tword, vector<string> translation): Worddo(tword, translation) {}
    void learn();
};

class Forget_word : public Worddo {
public:
    Forget_word(string tword, vector<string> translation, vector<string> sentence): Worddo(tword, translation, sentence) {}
    Forget_word(string tword, vector<string> translation): Worddo(tword, translation) {}
    void learn();
};
#endif