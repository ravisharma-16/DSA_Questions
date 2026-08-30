#include<iostream>
using namespace std;
class TrimNode
{
    public:
    char data;
    TrimNode *children[26];
    bool isterminal;
    TrimNode(char D)
    {
        data = D;
        for(int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isterminal = false;
    }

};
int main()
{

}