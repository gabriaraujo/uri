#include <bits/stdc++.h>
using namespace std;

int main (){

    char number[1002];
    cin >> number;

    int size = strlen(number);

    multiset<char> tree;

    for (int i = 0; i < size; i++)
        tree.insert(number[i]);

    int max = tree.count(number[0]);
    char vallue = number[0];

    cout << max << " -  " << vallue << endl;

    for (multiset<char>::iterator it = tree.begin(); it != tree.end(); it++){
        cout << *it << " " << tree.count(*it) << endl;
        if (max <= (int)tree.count(*it) && *it > vallue){
            max = tree.count(*it);
            vallue = *it;
        }
    }

    cout << vallue << endl;

    return 0;
}
