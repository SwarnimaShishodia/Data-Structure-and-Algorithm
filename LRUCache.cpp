#include<bits/stdc++.h>
using namespace std;

class LRUCache
{
    public:
    
    list<int>dq;
    unordered_map<int, list<int>::iterator>m;
    int capacity;
    
    LRUCache(int n)
    {
        capacity=n;
    }
    
    void refer(int page)
    {
    if(m.find(page)==m.end())
    {
        if(dq.size()==capacity)
        {
            int last=dq.back();
            dq.pop_back();
            m.erase(last);
        }
    }
    else
    dq.erase(m[page]);
    
    dq.push_front(page);
    m[page]=dq.begin();
    
    }

    void display()
    {
    for(auto it=dq.begin();it!=dq.end();it++)
    cout<<(*it)<<" ";
     }

};

int main()
{
    int n;
    cin>>n;
    LRUCache obj(n);
    int page;
    cin>>page;
    while(page!=-1)
    {
        obj.refer(page);
        cin>>page;
    }
    obj.display();
}
