#include<vector>
#include<iostream>

using namespace std;

class Queue{
    private:
        vector<int> q;

    public:
        void enqueue(int value){
            q.push_back(value);

        }

        void dequeue(){
            q.erase(q.begin());

        }

        int front(){
            return q.front();
        }


};