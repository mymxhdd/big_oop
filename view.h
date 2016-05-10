#ifndef VIEW_H
#define VIEW_H
//视图窗口，所有显示在屏幕上的从这调用
class View{
public:
    virtual int start() = 0;
    virtual void learn(Word* tword) = 0;  
    virtual void test() = 0;  
    virtual void search_word() = 0;
    virtual void error() = 0;
    virtual void search() = 0;
    virtual void no_word(string word) = 0;
    virtual void add_sentence() = 0;
    virtual void sucess() = 0;
};

class My_view : public View{
public:    
    int start();
    void learn(Word* tword); 
    void test();
    void search_word();
    void error();
    void search();
    void no_word(string word);
    void add_sentence();
    void sucess();
};


#endif