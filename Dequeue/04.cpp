// Finding the Maximum Element


#include<bits/stdc++.h>
using namespace std;

int findMaxElement(deque<int> &dq)
{
    return *max_element(dq.begin(), dq.end());
}

int main(){
    
    deque<int> dq = {1, 3, 5, 2, 4, 6};

    int result = findMaxElement(dq);

    cout<<"Max Element -> "<<result<<endl;



    return 0;
}