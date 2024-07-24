#include<bits/stdc++.h>
using namespace std;

pair<int, int> findMinMax(list<int> list1)
{
    int minElement = *min_element(list1.begin(), list1.end());
    int maxElement = *max_element(list1.begin(), list1.end());

    return make_pair(minElement, maxElement);
}

int main(){
    
    list<int> list1{1,22,33,14,5};

    auto result = findMinMax(list1);

    cout<<"Min Element = "<<result.first<<endl;
    cout<<"Max Element = "<<result.second<<endl;

    return 0;
}