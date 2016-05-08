#ifndef FILE_STRAGETY_H
#define FILE_STRAGETY_H
//文件读取策略，根据不同文件读取方式进行继承
class File_stragety{
public:
    virtual void read(string goal) = 0;  
    virtual void write(string goal) = 0;
};

class first_file : File_stragety{
public:    
    void read(string goal);
    void write(string goal);
};

#endif