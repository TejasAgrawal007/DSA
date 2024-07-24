#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(list<int> list1)
{
    set<int> seen;

    auto it = list1.begin();

    while(it != list1.end())
    {
        if (seen.find(*it) != seen.end())
        {
            it = list1.erase(it);
        }
        else
        {
            seen.insert(*it);
            ++it;
        }
        
    }

}

int main(){
    
    list<int> list1 = {1, 2, 2, 3, 4, 4, 5};
    removeDuplicates(list1);

    for(auto x : list1)
    {
        cout<<x<<" ";
    }



    return 0;
}