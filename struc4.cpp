#include<iostream>
using namespace std;
struct book{
    string title;
    int pages;
    float price;

};
struct author{
    string name,country;
    int age;
    book books;
};

int main(){
    struct author author1;
    author1.name="Sarah J mass";
    author1.age=35;
    author1.country="London";
    author1.books.title="A court of wings and ruin";
    author1.books.pages=700;
    author1.books.price=1000;
    cout<<"author name "<<author1.name<<endl;
    cout<<"author age "<<author1.age<<endl;  
    cout<<"author country "<<author1.country<<endl; 
    cout<<"author book "<<author1.books.title<<endl;
    cout<<"book pages "<<author1.books.pages<<endl;
    cout<<"book price "<<author1.books.price<<endl;
    return 0;
}