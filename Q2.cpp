#include<iostream>
using namespace std;

class programming{
    public:
    programming(){
        cout<<"I love programming languages"<<endl;
    }
    programming(string s){
        cout<<"I love "<<s;
    }

};
int main(){
    programming p;
    programming p2("CPP");


}