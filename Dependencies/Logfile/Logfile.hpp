#ifndef __CLOGFILE
#define __CLOGFILE

#include <Windows.h>
#include <stdio.h>
#include "Singleton.hpp"

/* Defines */

#define MAX_BUFFER 1024							/* Maximale Größe für den Buffer */
#define L_FAIL false							/* Funktion war erfolgreich */
#define L_OK true								/* Funktion ist fehlgeschlagen */
#define g_pLogfile CLogfile::Get ()				/* Makro zur einfachen Verwendung */

/* Farben für den Text */
enum FONTCOLORS
{
	BLACK,
	RED,
	GREEN,
	BLUE,
	PURPLE,
};

class CLogfile : public TSingleton<CLogfile>
{
public:

		 CLogfile		();
	     ~CLogfile		();
	void CreateLogfile  (const char *LogName);
	void WriteTopic     (const char *Topic, int Size);
	void Textout        (const char *Text);
	void Textout		(int Color, const char *Text); 
	void Textout		(int Color, bool List, const char *Text);
	void fTextout       (const char *Text, ...);
	void fTextout		(int Color, const char *Text, ...); 
	void fTextout		(int Color, bool List, const char *Text, ...);

	void FunctionResult (const char *Name, bool Result);

private:

	FILE *m_Logfile;
	
};

#endif