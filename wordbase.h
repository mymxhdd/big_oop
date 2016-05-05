#ifndef WORDBASE_H
#define WORDBASE_H
#include "file_stragety.h"

template<typename T> class wordbase
{
public:
    virtual void read_data(string goal) = 0;
    virtual void write_data(string goal) = 0;
    virtual void search_word(string word) = 0;
	virtual void add_word(T* word) = 0;
	virtual void remove_word(T* word) = 0;
    virtual void search_txt(string txt) = 0;
    virtual ~wordbase();
};


template <typename T> vectorwordbase : public wordbase<T>{  
    vector<T*> words;
    file_stragety * file;
public:
    void read_data(string goal);
    void write_data(string goal);
    void search_word(string word);
	void add_word(T* word);
	void remove_word(T* word);
    void search_txt(string txt)
};

#endif