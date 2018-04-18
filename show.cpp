#include<iostream>

bool list::show(int task_no){
    std::cout<<"Task No : "<<task_no<<"\n";
    int i;
    for(i=1;i<=task_no;i++){
        if(task_no==1){
            std::cout<<"Task Name :\n";
            std::cout<<"Day : "<<dd<<"\nMonth : "<<mm<<"\nYear : "<<yy<<"\n";
            return 1;
        }
    }
    return 0;
}
