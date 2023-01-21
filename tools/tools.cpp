/**
 *
 *Filename: tools.cpp
 *Created in 2023/01/21 17:44:21
 *Author: tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;

inline void show_usage()
{
    printf("Usage:\n"
           "-p git push\n"
           "-a add readme file\n"
           "-c <src> <dst>copy other folder's structure\n");
    return;
}
int main(int argc, char **argv)
{
    cin.tie(0);
    if (argc < 2)
    {
        show_usage();
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        printf("%c\n", argv[i][1]);
        switch (argv[i][1])
        {

        case 'p':

            system("./bin/gitpush");
            break;
        case 'a':
            system("python addreadme.py");
            break;
        case 'c':
            printf("to be continue...\n");
            break;
        default:
            break;
        }
    }

    return 0;
}
