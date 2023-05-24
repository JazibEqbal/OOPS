#include<iostream>
#include<queue>

/*
  queue follows FIFO principle -- first in first out
  time complexity - O(1)
  Elements are inserted at the rear and are deleted from the front.
*/
void displayQueue(std::queue<int> queue){
    std::queue<int> q = queue;
    //continuing till the queue is not empty
    while(!q.empty()){
        std::cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    std::queue<int> q1;
    for(int i=0;i<4;i++){
        q1.push(i+1);
    }
    std::queue<int> q2;
    for(int i=1;i<6;i++){
        q2.push(i*i);
    }
    //adds element at the rear end
    q1.push(5);
    //swapping the queue
    q1.swap(q2);

    displayQueue(q2);
    return 0;
}