#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    unordered_map<string , int> m ;

    pair <string ,  int> p = make_pair("pooja" , 3);

    m.insert(p);

    pair<string , int> p2("love" , 2);
    m.insert(p2);

    m["idiot"] = 1;

    cout<<m.at("pooja")<<endl;

    cout<<m["idiot"]<<endl;

    cout<<m["unknownkey"] <<endl;

    cout<<m.at("unknownkey")<<endl;

    cout<<m.size()<<endl;

    cout<<m.erase("idiot")<<endl;

    cout<<m.size()<<endl;


}