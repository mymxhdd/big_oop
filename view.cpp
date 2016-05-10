#include "View.h"
#include "Word.h"
int My_view:: start()
{
    cout << endl;
	cout << "**清清英语词典**" << endl;
	cout << "1: 查询单词" << endl;
	cout << "2: 学习" << endl;
	cout << "3: 测试" << endl;
	cout << "4: 通过文件统计单词" << endl;
	cout << "5: 设置环境" << endl;
	cout << "0: 结束" << endl;
	cout << endl;

	cout << "选择：" ;
}

void My_view:: search_word()
{
	cout << endl;
	cout << "1:继续查询 2:添加例句 0:结束查询" << endl;
	cout << "输入命令: "; 
}

void My_view:: test()
{
    cout << "**单词测试**" << endl;
}

void My_view:: error()
{
	cout << "输入了错误的命令" << endl;
}

void My_view:: search()
{
	cout << endl;
	cout << "**查询英文单词**" << endl;
	cout << "输入单词： ";	
}

void My_view:: no_word(string word)
{
	cout << "在词库里没有 \"" << word << "\"" << endl; 	
}

void My_view:: add_sentence()
{
	cout << "输入例句:\n\t";	
}

void My_view:: sucess()
{
	cout << "成功!" << endl;
}