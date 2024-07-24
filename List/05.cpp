#include<bits/stdc++.h>
using namespace std;

list<int> mergeSortedList(list<int> &list1 , list<int> &list2)
{
    list<int> mergedList;

    auto it1 = list1.begin();
    auto it2 = list2.begin();

    while (it1 != list1.end() && it2 != list2.end())
    {
        if (*it1 <= *it2)
        {
            mergedList.push_back(*it1);
            ++it1;
        }
        else{
            mergedList.push_back(*it2);
            ++it2;
        }
    }

    while(it1 != list1.end())
    {
        mergedList.push_back(*it1);
        ++it1;
    }

    while (it2 != list2.end())
    {
        mergedList.push_back(*it2);
        ++it2;
    }
    return mergedList;
    


}

int main(){
    
    list<int> list1 = {1, 3, 5};
    list<int> list2 = {2, 4, 6};

    list<int> mergedList = mergeSortedList(list1, list2);

    for(auto x : mergedList)
        cout<<x<<" ";

    return 0;
}