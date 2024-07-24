#include<bits/stdc++.h>
using namespace std;

void rotateList(list<int> list1, int k)
{
    if(list1.empty() || k < 0) return;

    k = k % list1.size();

    for(int i = 0; i < k; ++i)
    {
        int back = list1.back();
        list1.pop_back();
        list1.push_front(back);
    }

}


int main(){
    list<int> list1 = {1, 2, 3, 4, 5};
    int k = 2;
    rotateList(list1, k);

    for(int x : list1)
    {
        cout<<x<<" ";
    }

    return 0;
}