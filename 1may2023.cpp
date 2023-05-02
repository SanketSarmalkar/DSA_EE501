// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Implementation of stl Map
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> temp;
    temp["Monday"] = 100;
    temp["Tuesday"] = 200;
    temp["Wednesday"] = 300;
    temp["Thursday"] = 400;

    cout << "The size of the map is: " << temp.size() << endl;
    cout << "The max size of the map is: " << temp.max_size() << endl;
    map<string, int>::iterator it;
    for(it = temp.begin(); it != temp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    temp.erase(--it);
    cout << "The size of the map is: " << temp.size() << endl;
    temp.insert(pair<string, int>("Friday", 500));
    cout<< "The size of the map is: " << temp.size() << endl;
}