#include<iostream>
class list{
public:
    int dd,mm,yy;
    std::string task_name,description;
    bool add();
    bool show(int task_no);
    bool delet(int task_no);
    bool exit(int item);
}task_list[1005],task;
