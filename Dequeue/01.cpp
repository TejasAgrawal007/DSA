#include<bits/stdc++.h>
using namespace std;

void display(deque<int> deq)
{
    deque<int>::iterator it;

    for(it = deq.begin(); it != deq.end(); ++it)
    {
        cout<<*it<<" ";
    }

}

int main(){
    
    deque<int> deq;

    deq.push_back(10);
    deq.push_front(5);
    deq.push_back(15);
    deq.push_front(20);

    deq.insert(deq.begin() + 2, 500);


    deq.erase(deq.begin() + 3);

    display(deq);
    cout<<endl;



    cout<<"Deque size = "<<deq.size()<<endl;

    return 0;
}