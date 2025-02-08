#include <iostream>
using namespace std;
struct student{
    string name;
    int age;
    int id; 
};
int main(){
    struct student stu1;
   stu1.name="Devika";
    stu1.age=20;
    cout <<"name of student "<<stu1.name<<endl;
    cout<<"age "<<stu1.age<<endl;
    return 0;
}
