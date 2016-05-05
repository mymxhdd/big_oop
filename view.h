#ifndef VIEW_H
#define VIEW_H

class view{
public:
    virtual void start() = 0;
    virtual void learn(word* tword) = 0;    
};

class my_view : public view{
public:    
    void start();
    void learn(word* tword); 
};
#endif