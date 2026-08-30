// #include<iostream>
// #include<map>
// using namespace std;
// int main()
// {
//     map<string, int> m;
//     m["TV"] = 10;
//     m["Remote"] = 20;
//     m["AC"] = 30;
//     m["Fan"] = 40;

//     // add
//     m.insert({"Washing Machine", 50});
//     m.emplace("Fridge", 60);

//     // erase
//     m.erase("Fan");

//     // count
//     cout << m.count("TV") << endl;

//     //find
//     if(m.find("AC") != m.end())
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not Found" << endl;
//     }
//     for(auto ravicompany : m)
//     {
//         cout << ravicompany.first << " " << ravicompany.second << endl;
//     }
// }

// #include <iostream>
// #include <unordered_map>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> nums = {1, 2, 3, 1, 2, 1, 4, 5, 4};
//     unordered_map<int, int> freq;

//     // Count frequencies
//     for (int num : nums) {
//         freq[num]++;  // freq[num] = freq[num] + 1;
//     }

//     // Print frequencies
//     for (auto it : freq) {
//         cout << "Number " << it.first << " appears " << it.second << " times.\n";
//     }

//     return 0;
// }


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// int main() {
//     string words[] = {"apple", "banana","banana","banana", "apple", "orange", "banana", "apple"};

//     unordered_map<string, int> freq;

//     for (string word : words) {
//         freq[word]++;
//     }

//     for (auto it : freq) {
//         cout << it.first << " : " << it.second << endl;
//     }

//     return 0;
// }


int main()
{
    unordered_map<string,int>m;
    // inserting
    // 1
    pair<string,int>p = make_pair("ravi",2);
    m.insert(p);
    //2
    pair<string,int>p2("sharma",3);
    m.insert(p2);
    //3
    m["love"] = 40;
    m["babbar"] = 15;

    // check size
    cout << m.size()<<endl;

    // count of the key
    cout << m.count("babbar")<<endl;

    //erase
    m.erase("ravi");

    //search
    if(m.find("love") != m.end())
    {
        cout<<m.at("love")<<endl;
    }

    //print all
    for(auto it : m)
    {
        cout<<it.first <<" : "<<it.second<<" ";
    }


    unordered_map<int,int> arr;

    arr[1] = 40;
    arr[1] = 50;
    arr[2] = 60;
    arr[4] = 70;

    // for (auto [key,value] : arr)
    // {
    //     cout << key << " -> " << value << endl;
    // }

    return 0;


}
