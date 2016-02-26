#ifndef SCAN_H
#define SCAN_H

#include<iostream>
#include<queue>
#include<string> 
using namespace std;

class Scan
{
	public:
		queue<string> ToStringQueue(string input);//函数return一个队列 
	protected:
		queue<string>input;
};

#endif
