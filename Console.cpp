#include "Console.h"

//由于Console是虚类， 所以在这里只有对 MyConsole 具体化

int MyConsole::Menu()
{
	int select;
	_view -> start();
	cin >> select;

	switch(select)
	{
	case 1:
		Search();
		break;
	case 2:
		Learn();
		break;
	case 3:
		Test();
		break;
	case 4:
		Statistics();
		break;
	case 5:
		Setting();
		break;
	case END:
		return END;
		break;
	default:
		_view -> error();
	}
	return CONTINUE;

}

//找英语单词的骨干
void MyConsole::Search()					
{
	_view -> search();
    string word;
   do{ 
		cin >> word;
	}while(search_word(word) == CONTINUE);	//用户选择继续查询时,反复
}

//找英语单词,且附加功能(继续查询, 添加例句)
int MyConsole::search_word(string word)
{
	if(_base -> search_word(word) == true)		//此时调用Wordbase的search_word //建议: 应该Wordbase::search_word里或它的子类中,实现把单词输出在画面的功能
	{		
		int select = -1;
		while(select != END)					//选择附加功能 (直到select为0为止)
		{
			cin >> select;
			switch(select)
			{
			case 1:
				return CONTINUE;
				break;
			case 2:
				Add(word);
				break;
			case END:
				break;
			default:
				_view -> error();
			}
		}
	}
	else									//未找到单词时
		_view -> no_word(word);
	return END;
}

//添加例句的骨干
void MyConsole::Add(string word)
{
	string sentence;
	_view -> add_sentence();
	cin.ignore(1,'\n');				//(由于getline读入'\n',则用此函数来清空buff中'\n')
	getline(cin, sentence);
	addsentence(word, sentence);
	_view -> sucess();	
}

void MyConsole::addsentence(string word, string sentence)
{
	_base -> add_sentence(word, sentence);
}

//通过文件统计单词且修改陌生程度
void MyConsole::Statistics()
{
	cout << "**通过文件统计单词且更新陌生程度**" << endl;
	cout << "输入文件名(包括地址): ";
	string file_name;
	cin >> file_name;

	//此种应该写调用 通过文件统计单词并且更新陌生程度的函数 (应该是什么??)
	
	if( ... == 1 )		
	{
		cout << "统计并更新成功";
	}
	else			//读文件失败时
	{
		cout << "不存在 \"" << file_name << "\" " <<endl;
	}
	cout << endl;
}

void MyConsole::Test()
{
	
	//等待具体化
}


