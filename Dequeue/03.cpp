//  Merge Two deques


#include<bits/stdc++.h>
using namespace std;

deque<int> mergeDeque(deque<int> &dq1, deque<int> &dq2)
{
    deque<int> merged(dq1.begin(), dq1.end());

    merged.insert(merged.end(), dq2.begin(), dq2.end());

    sort(merged.begin(), merged.end());

    return merged;

}

int main(){
    
    deque<int> dq1 = {1, 3, 5};
    deque<int> dq2 = {2, 4, 6};

    deque<int> merged =  mergeDeque(dq1, dq2);

    for(auto x: merged)
    {
        cout<<x<<" ";
    }

    return 0;
}