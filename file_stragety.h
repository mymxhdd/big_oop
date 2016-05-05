#ifndef FILE_STRAGETY_H
#define FILE_STRAGETY_H

class file_stragety{
public:
    virtual void read(string goal) = 0;  
    virtual void write(string goal) = 0;
};

#endif