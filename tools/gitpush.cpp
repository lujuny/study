/**
 *
 *Filename: gitpush.cpp
 *Created in 2023/01/20 14:06:28
 *Author: tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;

string get_comment()
{
    string tmp, buffer;
    while (getline(cin, buffer) && buffer.size())
    {
        tmp += buffer;
        tmp += "\n";
    }
    return tmp;
}
int main(int argc, char **argv)
{
    cin.tie(0);
    string comment, default_comment = "update file";
    char buffer[10010], add_comment;
    system("tree ../. > catalog.md");
    system("git add ../.");
    
    printf("input comment:\n");
    comment = get_comment();
    
    
    sprintf(buffer, "git commit -m \"%s\"", comment.c_str());
    // printf("%s\n", buffer);
    system(buffer);
    system("git push");
    // system("rm -rf gitpush.exe");

    return 0;
}
