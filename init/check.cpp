#include<bits/stdc++.h>
#include<windows.h>
#include "..\run.h"
using namespace std;
const int N=1001;
char instruct[N];
int main(int argc,char **argv)
{
    system("del /Q %appdata%\\run\\source\\* > %appdata%\\run\\rubbish\\rubbish.txt");
    init_parameter(argc,argv);
    if(num_parameter['n']<=0)
    {
        printf("\nERROR: Invalid syntax. No /n specified.\n\n");
        return 0;
    }
    input_name(11,parameter['f'][1],".cpp");
    input_name(12,parameter['f'][2],".cpp");
    input_name(13,parameter['f'][3],".cpp");
    if(copy_source(get_name(11)))
    {
        print_result(-1);
        return 0;
    }
    if(copy_source(get_name(12)))
    {
        print_result(-1);
        return 0;
    }
    if(copy_source(get_name(13)))
    {
        print_result(-1);
        return 0;
    }
    sprintf(instruct,"start /b /d E:\\1.C++\\code\\run /wait E:\\1.C++\\code\\run\\check.exe ");
    for(int i=1;i<=argc-1;++i)
    {
        sprintf(instruct,"%s %s",instruct,argv[i]);
    }
    system(instruct);
    return 0;
}