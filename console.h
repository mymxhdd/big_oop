#ifndef CONSOLE_H
#define CONSOLE_H
#include "Wordbase.h"
#include "Learn_strategy.h"
#include "Word.h"	
//控制台，所有指令都从这发出

enum Selection{END=0, CONTINUE=1};

//Console类有可能被用为别的参数吗? 需要Console和 MyConsole 分层?
class Console
{
public:
	virtual int Menu() = 0;									//首页
    virtual void get_wordbase(Wordbase<Word*> * base) = 0;		//初始化单词数据 (*等待具体化)(该怎么具体化?)
    virtual void Learn() = 0;									//学习英语的骨干
	virtual void practice() = 0;
	virtual void change_learn_strategy(Learn_strategy * sty) = 0;
	virtual void Search() = 0;									//查询单词的页面
    virtual int search_word(string word) = 0;
	virtual void Add(string word) = 0;								//添加例句的页面(查询单词后的选择)     //??该有修改例句吗？？
    virtual void addsentence(string word, string sentence) = 0;
	virtual void Test() = 0;									//测试的页面 (*等待具体化) (应该怎么测试?)
    virtual void Statistics() = 0;								//通过文件更新单词陌生程度的页面		
	virtual void Setting() = 0;									//设置环境: 主要是语言
	virtual void setting_lang() = 0;
};

class MyConsole : public Console
{
    View * _view; Wordbase<Word*> _base; Learn_strategy * _sty;   // View 和 Learn_strategy 怎么用?
public:
	int Menu();
    void get_wordbase(Wordbase<Word*> * base);
    void Learn();								
	void practice();
	void change_learn_strategy(Learn_strategy * sty);
	void Search();
    int search_word(string word);
	void Add(string word);
    void addsentence(string word, string sentence);
	void Test();
	void Statistics();
	void Setting();
	void setting_lang();
}; 

#endif