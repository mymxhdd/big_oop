#ifndef VIEW_H
#define VIEW_H
//视图窗口，所有显示在屏幕上的从这调用
class View{
public:
    virtual void start() = 0;
    virtual void learn(Word* tword) = 0;    
};

class My_view : public View{
public:    
    void start();
    void learn(Word* tword); 
};
#endif