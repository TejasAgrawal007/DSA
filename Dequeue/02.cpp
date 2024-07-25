// Rotate The Deque

#include<bits/stdc++.h>
using namespace std;

void rotateRight(deque<int> &dq, int k)
{
    int n = dq.size();
    k = k % n; // Ensure k is within the bounds of the deque size

    for(int i = 0; i < k; ++i)
    {
        int temp = dq.back();
        dq.pop_back();
        dq.push_front(temp);
    }

}

int main(){

    deque<int> dq{1,2,3,4,5};
    int k = 2;

    rotateRight(dq, k);

    for(auto x : dq)
    {
        cout<<x<<" ";
    }
    
    return 0;
}