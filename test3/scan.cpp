#include "scan.h"
#include<iostream>
#include<queue>
#include<string>
using namespace std;

queue<string> Scan::ToStringQueue(string input)
{
	int i(0);
	for(;i<input.size();i++)
	{
		//处理字符串中出现数字的情况：数字在一行中输出 
			if(input[i]>='0'&&input[i]<='9'){
			for(;input[i]>='0'&&input[i]<='9';i++)
			{
				cout<<input.front();
				input.pop();	
			}
			cout<<endl;
		}
		//处理字符 
		else
		{
			cout<<input.front<<endl;
			input.pop();	
		}
	}
}
