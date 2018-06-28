/* Replace "dll.h" with the name of your header */
#include "dll.h"
#include <windows.h>

using namespace std;
Version* Version::instance=NULL;

const int Version::iVersion[5] = {2, 01, 1, 1, 20180630};

DllClass::DllClass()
{

}

DllClass::~DllClass()
{

}

void DllClass::HelloWorld()
{
	MessageBox(0, "Hello World from DLL!\n","Hi",MB_ICONINFORMATION);
}

Version::Version(){
	
}

Version::~Version(){
	if(NULL!=instance)
	{
		delete instance;
		instance=NULL;
	}
}

Version* Version::getInstance()
{
    if(NULL==instance)
    {
	  instance=new Version();
	}	
	return instance;
}

float Version::getVersion()
{
	return (float)iVersion[0]+(float)iVersion[1]/100+(float)iVersion[2]/1000;
}

int Version::getDate()
{
	return iVersion[4]; 
}  
string Version::getAuthor(){
	return "sangdq25@gmail.com";
}

string Version::getEmail(){
	return "sangdq25@gmail.com";
}


string Version::getCopyRight(){
	return "sangdq25@gmail.com";
}


BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved)
{
	switch(fdwReason)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_PROCESS_DETACH:
		case DLL_THREAD_ATTACH:	
		case DLL_THREAD_DETACH:
			break;
	}
	
	/* Return TRUE on success, FALSE on failure */
	return TRUE;
}
