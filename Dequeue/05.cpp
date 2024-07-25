// Maintaining a Sorted deque

#include<bits/stdc++.h>
using namespace std;


void insertSorted(deque<int> &dq, int element)
{
    auto it = lower_bound(dq.begin(), dq.end(), element);
    dq.insert(it, element);
}

int main(){

    deque<int> dq = {1, 3, 5, 7};

    insertSorted(dq, 4);
    insertSorted(dq, 6);
    insertSorted(dq, 2);
    
    for(auto x : dq)
    {
        cout<<x<<" ";
    }

    return 0;
}