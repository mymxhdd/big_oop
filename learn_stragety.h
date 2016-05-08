#ifndef "LEARN_STRAGETY_H"
#define "LEARN_STRAGETY_H"
//学习策略，继承接口进行不同学习模式
class Learn_stragety{
public:    
    virtual void learn() = 0;
};

#endif