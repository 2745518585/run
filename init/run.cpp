#include<bits/stdc++.h>
#include<windows.h>
#include "copy.h"
#include "name.h"
#include "..\parameter.h"
using namespace std;
const int N=1001;
char instruct[N];
int main(int argc,char **argv)
{
    system("del /Q E:\\1.C++\\code\\run\\source\\*");
    init_parameter(argc,argv);
    if(copy(input_name(1,parameter['f'][1])))
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
        printf("\nNo such file\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        return 0;
    }
    sprintf(instruct,"start /b /d E:\\1.C++\\code\\run /wait E:\\1.C++\\code\\run\\run.exe ");
    for(int i=1;i<=argc-1;++i)
    {
        sprintf(instruct,"%s %s",instruct,argv[i]);
    }
    system(instruct);
    return 0;
}