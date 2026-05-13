#include<bits/stdc++.h>
using namespace std;

class solution {

public:

bool isomorphic(string s1, string s2) {

    unordered_map<char,char> mp1;
    unordered_map<char,char> mp2;

    for(int i = 0; i < s1.length(); i++) {

        char c1 = s1[i];
        char c2 = s2[i];

        // check s1 -> s2
        if(mp1.find(c1) != mp1.end()) {

            if(mp1[c1] != c2) {

                return false;

            }

        }

        else {

            mp1[c1] = c2;

        }

        // check s2 -> s1
        if(mp2.find(c2) != mp2.end()) {

            if(mp2[c2] != c1) {

                return false;

            }

        }

        else {

            mp2[c2] = c1;

        }

    }

    return true;

}

};
