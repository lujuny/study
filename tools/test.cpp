/**
 *
 *Filename: test.cpp
 *Created in 2023/01/20 14:38:08
 *Author: tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;

string get_comment(){
    string tmp, buffer;
    while (getline(cin, buffer) && buffer.size())
    {   
        tmp += buffer;
        tmp += "\n";
    }
    return tmp;
}

int main(int argc,char** argv){
    cin.tie(0);
    system("python test.py");    
    
    return 0;
}
