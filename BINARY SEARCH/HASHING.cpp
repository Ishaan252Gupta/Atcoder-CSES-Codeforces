#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //creating hash map
    unordered_map<string,int> m;
    pair<string,int> p1=make_pair("babbar",3);
    m.insert(p1);
    pair<string,int> p2=make_pair("mera",2);
    m.insert(p2);
    cout<< m["mera"]<<endl;
    //m.at just finds the key,value
    //m.[key] finds if not there creates the key and return 0
    cout<< m["unknown"]<<endl;
    cout<<m.at("unknown")<<endl;
    //SIZE
    cout<<m.size()<<endl;
    //count()
    cout<<m.count("mera")<<endl;
    //erase
    cout<<m.erase("mera")<<endl;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}