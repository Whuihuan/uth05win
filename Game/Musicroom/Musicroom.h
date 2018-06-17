#pragma once
#include "../scheme.h"
#include "../../gameLib/Graphic/2DImageArray.h"

#define MUSICROOM_END_BACK 1
namespace th5w {

	class CMusicRoom : public CScheme
	{
	protected:
		bool m_bLoadMode;
		int m_curFrame;
		unsigned short m_lastKeyState, m_curKeyState;

	protected:
		int m_nFilePerPage;
		int m_nPage;
		int m_curPage;
		int m_curCursorPos;
		int m_curCursorColPos;
		int m_listUpperLeftX;
		int m_listUpperLeftY;
		bool m_bCurPageRepFileExist[50];
		
		th5w::C2DImageArray m_shineArray;
		C2DImage *m_pBGImage;

		bool m_bEnterNameMode;
		int m_curCharX;
		int m_curCharY;
		int m_nameCursorPos;
		int m_selectedSlot;
		int m_curRowY;
		char m_curEnterName[10];

		int m_curScrFade;
		bool m_bQuit;
		int m_quitCode;

	protected:
		void SwitchPage(int pageIdx);

	public:
		void Initialize(bool bLoadMode, bool bSwitchMusic);
		int Step();
		void Draw();

	public:
		CMusicRoom(void);
		~CMusicRoom(void);
	};

}