#ifndef CIRCLE_QUEUE_H
#define CIRCLE_QUEUE_H
//用循环队列来存储查询历史，避免内存爆炸
const int MAX=30; //循环队列的固定长度 


template<typename T>
class MyQue{
private:
    T que[MAX];
    size_t front_index; //队首下标 
    size_t back_index;  //队尾下标 
    size_t length;      //队列长度 
public:
    MyQue():front_index(0),back_index(0),length(0) {}
    void pop() {
        if( empty() )
            return;
        que[front_index] = T(); //把队首元素置空 
        front_index = (front_index + 1) % MAX ; //计算队首下标的位置 
        length--;  
}

    void push(const T& val) {
        que[back_index] = val;
        back_index = (back_index + 1) % MAX ; //计算队尾下标的位置 
        length = (length + 1 == MAX? length : length + 1);
}
    size_t size() {
        return length;
}
    bool empty() {
        return length == 0;
}
    void print() {
        int size = 0;
        while(size <= length)
        {
            cout << que[front_index] << endl;
            front_index = (front_index + 1) % MAX;
            size++;
        }
}

};



#endif