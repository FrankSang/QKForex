#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif
#include<string>
using namespace std;
class DLLIMPORT DllClass
{
	public:
		DllClass();
		virtual ~DllClass();
		void HelloWorld();
};

class DLLIMPORT Version
{
	private:
		Version();
		~Version();
		static Version* instance;
		static const int iVersion[5];
	public:
		Version* getInstance();
		
		float getVersion();
		
		int getDate();
		
		string getAuthor();
		
		string getEmail();
		
		string getCopyRight();
		
};

#endif
