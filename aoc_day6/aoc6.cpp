#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
#include <array>
#include <map>
#include <regex> 
#include <iterator> 
using namespace std;

int main()
{
	ifstream file ("input.txt");
	 string word;
	 int count=0;
	 int finalCount=0;
	 //string alphabet = "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z";
	 while(getline(file,word))
	 {
	 	for(int i=0;i<word.size();i++)
	 	{
	 		bool repeat =false;
	 		for(int j=0;j<i;j++)
	 		{
	 			if(word[i]==word[j])
	 			{
	 				repeat =true;
	 				break;
	 			}
	 		}
	 		if(repeat==false)
	 		{
	 			count++;
	 		}
	 	}
	 	finalCount=finalCount+count;
	 	count=0;
	 }
	 cout<<finalCount;

  // part 2

	 // int people=0;
	 // map<char, int> answers;
	 // answers.insert(pair<char, int>('a', 0));
	 // while(getline(file,word))
	 // {
	 // 	if(word="2")
	 // 	{
	 // 		//empty everything

	 // 	}
	 // 	else
	 // 	{
	 // 		for(int i=0;i<word.size();i++)
	 // 		{

	 // 		}
	 // 	}
	 // }
	 return 0;

}
