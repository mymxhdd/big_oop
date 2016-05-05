#ifndef WORDBASE_H
#define WORDBASE_H
#include "File_stragety.h"
//单词库
template<typename T> class Wordbase
{
public:
    virtual void read_data(string goal) = 0;
    virtual void write_data(string goal) = 0;
    virtual void search_word(string word) = 0;
	virtual void add_word(T* word) = 0;
	virtual void remove_word(T* word) = 0;
    virtual void search_txt(string txt) = 0;
    virtual ~Wordbase();
};


template <typename T> Vectorwordbase : public Wordbase<T>{  
    vector<T*> words;
    File_stragety * file;
public:
    void read_data(string goal);
    void write_data(string goal);
    void search_word(string word);
	void add_word(T* word);
	void remove_word(T* word);
    void search_txt(string txt);
};

#endif