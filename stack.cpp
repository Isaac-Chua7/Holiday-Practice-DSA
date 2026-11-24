#include<vector>
#include<iostream>
using namespace std;

class Stack{
    private:
        vector<int> v;

    public:
        Stack(){
            cout << "Stack created" << endl;
        }

        void push(int value){
            v.push_back(value);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
            return v.back();
        }

        void print(){
            for(int num:v){
                cout << num << " ";
            }

            cout << endl;
        }

};

int main(){
    Stack s = Stack();

    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.pop();
    s.pop();
    s.push(1);

    s.print();

}