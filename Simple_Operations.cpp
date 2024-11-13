#include<iostream>
void add_(int x,int y){
    std::cout<<"The sun is :"<<x+y;}
void subtract_(int x, int y){
    std::cout<<"The difference is :"<<x-y;
}
int main(){
    int x,y,d;
    std::cout<<"Enter 2 numbers";
    std::cin>>x>>y;
    std::cout<<"Pick an Operation:"<<'\n'<<"1:Addition"<<'\n'<<"2:Subtraction";
    std::cin>>d;
    switch (d){
        case 1: add_(x,y); break;
        case 2: subtract_(x,y); break;
    }
}