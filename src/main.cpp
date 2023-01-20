#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<char> lst = {};
    vector<char> vec = {};
    string data = "";

    cout << "Input data without \"spaces\": " << endl;
    getline(cin, data);

    reverse(data.begin(), data.end());

    for(char i : data) {
        lst.push_front(i);
    }

    for (char i : lst) {
        vec.push_back(i);
    }

    for (int i =1; i < vec.size(); i+=2) {
        vec.insert(vec.begin() + i, vec.at(vec.size() - 1));
        vec.pop_back();
    }

    reverse(vec.begin(), vec.end());

    lst.clear();

    for(char i : vec) {
        lst.push_front(i);
    }

    cout << "\nSwapped data: " << endl;
    for (auto i : lst) {
        cout << i << " ";
     }

    return 0;
}
