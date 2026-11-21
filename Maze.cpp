#include <iostream>
#include <conio.h>

#define MAZE_X		41
#define MAZE_Y		40
#define MAX_BOMB	10

#define MAZE_VALID	MAZE_X - 1

#define BORDER_TOP_IDX		0
#define BORDER_BOTTOM_IDX	MAZE_VALID - 1
#define BORDER_LEFT_IDX		0
#define BORDER_RIGHT_IDX	MAZE_VALID - 1

using std::cout;
using std::endl;


enum MAZE_BLOCK
{
	WALL = '0',
	ROAD,
	START,
	DEST,
	BOMB,
	PORTAL,
	ITEM_SPADE,
	ITEM_HEART,
	ITEM_CLUB,
	ITEM_DIAMOND,

	BORDER_LT = 'A',
	BORDER_RT,
	BORDER_LB,
	BORDER_RB,

	BORDER_H = 'H',
	BORDER_V = 'V',
};

struct __POINT
{
	int x;
	int y;
};

typedef __POINT		POINT;
typedef __POINT*	PPOINT;

/*
	void SetMaze(char _Maze[MAZE_Y][MAZE_X], POINT* _pStartPos, POINT* _pDestPos)	{	}
	void SetMaze(char(*_Maze)[MAZE_X], POINT* _pStartPos, POINT* _pDestPos)	{	}
	void SetMaze(char _Maze[][MAZE_X]) { }

	int* ptr1[4];			// Pointer Array
	int(*ptr2)[4];			// Array Pointer


	int iArr1[10];			// Array Element: int
	int* pArr1 = iArr1;		// Can point to an element using (int)*.

	int** pptr = ptr1;		// Array Element: int*
							// Can point to an element using (int*)*.

	int iArr2[4][4];		// Array Element: int[4]
	ptr2 = iArr2;			// Can be pointed to with an int(*Name)[4] variable.
*/

void SetMaze(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos, POINT* _pStartPos, POINT* _pDestPos)
{
	system("mode con:cols=80 lines=45");

	/*
		0: Wall
		1: Road
		2: Start	Position
		3: Dest		Position

		A: Angle
		B: Angle
		C: Angle
		D: Angle

		V: Vertical
		H: Horizontal
	*/

	_pStartPos->x = 1;
	_pStartPos->y = 23;

	_pDestPos->x = 38;
	_pDestPos->y = 18;

	*_pPlayerPos = *_pStartPos;

	strcpy_s(_Maze[0], "AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHB");
	strcpy_s(_Maze[1], "V00000000000001111111111111100000000000V");
	strcpy_s(_Maze[2], "V00000000000001000000000000100000000000V");
	strcpy_s(_Maze[3], "V00000000000001000000000000100000000000V");
	strcpy_s(_Maze[4], "V00000000001111111000000000100000000000V");
	strcpy_s(_Maze[5], "V01000000001000001000000000111111110000V");
	strcpy_s(_Maze[6], "V01000000001000001111111000000100000000V");
	strcpy_s(_Maze[7], "V01000011111000001000001000000100000000V");
	strcpy_s(_Maze[8], "V01000000000000001000001000000100000000V");
	strcpy_s(_Maze[9], "V01111111000000001000111111000100000000V");
	strcpy_s(_Maze[10], "V00010001000000001000000000000100000000V");
	strcpy_s(_Maze[11], "V00010001111111111111000001111110000000V");
	strcpy_s(_Maze[12], "V00000000010000000001000001000000000000V");
	strcpy_s(_Maze[13], "V01110011111111110001000001111111000000V");
	strcpy_s(_Maze[14], "V01000010000001000000010000000001000000V");
	strcpy_s(_Maze[15], "V01000010000001000000011111111111111000V");
	strcpy_s(_Maze[16], "V11111111100001000000010000001000001000V");
	strcpy_s(_Maze[17], "V00001000000001111100010000001000001000V");
	strcpy_s(_Maze[18], "V10001000000000000000010000001000111113V");
	strcpy_s(_Maze[19], "V11001000000011111111111100000000100000V");
	strcpy_s(_Maze[20], "V01111111110000001000000000111111100000V");
	strcpy_s(_Maze[21], "V00000000010000001000000000001000000000V");
	strcpy_s(_Maze[22], "V01111100011110000000000000001000000000V");
	strcpy_s(_Maze[23], "V21000100010000000000011111111000000000V");
	strcpy_s(_Maze[24], "V00000100010000000000110000001000000000V");
	strcpy_s(_Maze[25], "V00011111111110000000000000001000000000V");
	strcpy_s(_Maze[26], "V00010000000000000010000000001000111111V");
	strcpy_s(_Maze[27], "V00010000001111111110000111111000100000V");
	strcpy_s(_Maze[28], "V00010000001001000000000100000000100000V");
	strcpy_s(_Maze[29], "V00011111111001000000000111111111100000V");
	strcpy_s(_Maze[30], "V00000000100001000011111100000000111100V");
	strcpy_s(_Maze[31], "V10000000100001000000000000000000100000V");
	strcpy_s(_Maze[32], "V10000000111111111111111000000000100000V");
	strcpy_s(_Maze[33], "V10000000000100001000010000000000111110V");
	strcpy_s(_Maze[34], "V11111111111100001000011110000000000010V");
	strcpy_s(_Maze[35], "V00000000000100001000000000000000000010V");
	strcpy_s(_Maze[36], "V00111111111100001111111111111111100000V");
	strcpy_s(_Maze[37], "V00000000000000000000000000000000100000V");
	strcpy_s(_Maze[38], "V00000000000000001111111111111111100000V");
	strcpy_s(_Maze[39], "CHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHD");

}

MAZE_BLOCK GetTileInfo(char _Maze[MAZE_Y][MAZE_X], POINT* _pPos)
{
	if (_pPos->x < 0 || _pPos->x >= MAZE_X || _pPos->y < 0 || _pPos->y >= MAZE_Y)
		return WALL;

	return (MAZE_BLOCK)_Maze[_pPos->y][_pPos->x];
}

void Render(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos)
{
	for (int i = 0; i < MAZE_Y; i++)
	{
		for (int j = 0; j < MAZE_X; j++)
		{
			switch (_Maze[i][j])
			{
			case BORDER_LT:
				cout << "┏";
				break;
			case BORDER_RT:
				cout << "┓";
				break;
			case BORDER_LB:
				cout << "┗";
				break;
			case BORDER_RB:
				cout << "┛";
				break;
			case BORDER_H:
				cout << "──";
				break;
			case BORDER_V:
				cout << "│";
				break;
			}

			if (_pPlayerPos->x == j && _pPlayerPos->y == i)
				cout << "♂";

			else if (_Maze[i][j] == WALL)
				cout << "■";

			else if (_Maze[i][j] == ROAD)
				cout << "  ";

			else if (_Maze[i][j] == START)
				cout << "↑";

			else if (_Maze[i][j] == DEST)
				cout << "↓";
			else if (_Maze[i][j] == BOMB)
				cout << "Ｂ";

			else if (_Maze[i][j] == ITEM_SPADE)
				cout << "♠";
			else if (_Maze[i][j] == ITEM_HEART)
				cout << "♥";
			else if (_Maze[i][j] == ITEM_CLUB)
				cout << "♣";
			else if (_Maze[i][j] == ITEM_DIAMOND)
				cout << "◈";
			else if (_Maze[i][j] == PORTAL)
				cout << "☎";
		}
		cout << endl;
	}
}

void MoveUp(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos)
{
	if (_pPlayerPos->y - 1 > BORDER_TOP_IDX)
	{
		if (_Maze[_pPlayerPos->y - 1][_pPlayerPos->x] != WALL)
			_pPlayerPos->y--;
	}
}

void MoveDown(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos)
{
	if (_pPlayerPos->y + 1 > BORDER_TOP_IDX)
	{
		if (_Maze[_pPlayerPos->y + 1][_pPlayerPos->x] != WALL)
			_pPlayerPos->y++;
	}
}

void MoveLeft(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos)
{
	if (_pPlayerPos->x - 1 > BORDER_LEFT_IDX)
	{
		if (_Maze[_pPlayerPos->y][_pPlayerPos->x - 1] != WALL)
			_pPlayerPos->x--;
	}
}

void MoveRight(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos)
{
	if (_pPlayerPos->x + 1 > BORDER_LEFT_IDX)
	{
		if (_Maze[_pPlayerPos->y][_pPlayerPos->x + 1] != WALL)
			_pPlayerPos->x++;
	}
}

void Plantbomb(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos, POINT* _pBombPos, int *_iBombCount)
{
	*_pBombPos = *_pPlayerPos;
	// _pBombPos->x = _pPlayerPos->x;
	// _pBombPos->y = _pPlayerPos->y;
	_Maze[_pBombPos->y][_pBombPos->x] = BOMB;
	(*_iBombCount)++;
}

int Item()
{
	return ITEM_SPADE + rand() % 4;
}

void Detonate(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos, POINT* _pBombPos, int *_iBombCount)
{
	for (int i = 0; i < *_iBombCount; i++)
	{
		_Maze[_pBombPos[i].y][_pBombPos[i].x] = ROAD;		

		if (_Maze[_pBombPos[i].y + 1][_pBombPos[i].x] == WALL)
		{
			_Maze[_pBombPos[i].y + 1][_pBombPos[i].x] = Item();
		}
		if (_Maze[_pBombPos[i].y - 1][_pBombPos[i].x] == WALL)
		{
			_Maze[_pBombPos[i].y - 1][_pBombPos[i].x] = Item();
		}
		if (_Maze[_pBombPos[i].y][_pBombPos[i].x + 1] == WALL)
		{
			_Maze[_pBombPos[i].y][_pBombPos[i].x + 1] = Item();
		}
		if (_Maze[_pBombPos[i].y][_pBombPos[i].x - 1] == WALL)
		{
			_Maze[_pBombPos[i].y][_pBombPos[i].x - 1] = Item();
		}
	}	
	*_iBombCount = 0;
}

bool SetPortal(char _Maze[MAZE_Y][MAZE_X], POINT* _pAlpha, POINT* _pBeta)
{
	int iPortalCount = 0;
	bool setportal = false;

	for (int i = 0; i < MAZE_Y; i++)
	{
		for (int j = 0; j < MAZE_X; j++)
		{
			if (_Maze[i][j] != PORTAL)
			{
				continue;
			}

			if (iPortalCount == 0)
			{
				_pAlpha->y = i;
				_pAlpha->x = j;
			}
			else if (iPortalCount == 1)
			{
				_pBeta->y = i;
				_pBeta->x = j;
			}
			++iPortalCount;

			if (iPortalCount == 2)
			{
				setportal = true;
			}
			else if (iPortalCount != 2)
			{
				setportal = false;
			}
		}
	}

	return setportal;
}

void Portal(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos, POINT* _pAlpha, POINT* _pBeta)
{
	if (GetTileInfo(_Maze, _pPlayerPos) != PORTAL)
		return;

	// If on Alpha, move to Beta; if on Beta, move to Alpha
	if (_pPlayerPos->x == _pAlpha->x && _pPlayerPos->y == _pAlpha->y)
		*_pPlayerPos = *_pBeta;
	else if (_pPlayerPos->x == _pBeta->x && _pPlayerPos->y == _pBeta->y)
		*_pPlayerPos = *_pAlpha;
}

bool MovePlayer(char _Maze[MAZE_Y][MAZE_X], POINT* _pPlayerPos, POINT* _pBombPos, POINT* _pAlpha, POINT* _pBeta, int *_iBombCount)
{
	char cInput = _getch();

	if (cInput == 'x' || cInput == 'X')
		return false;

	switch (cInput)
	{
	case 'W':
	case 'w':
		MoveUp(_Maze, _pPlayerPos);
		break;
	case 'S':
	case 's':
		MoveDown(_Maze, _pPlayerPos);
		break;
	case 'A':
	case 'a':
		MoveLeft(_Maze, _pPlayerPos);
		break;
	case 'D':
	case 'd':
		MoveRight(_Maze, _pPlayerPos);
		break;
	case 'B':
	case 'b':
		Plantbomb(_Maze, _pPlayerPos, _pBombPos, _iBombCount);
		break;
	case 'F':
	case 'f':
		Detonate(_Maze, _pPlayerPos, _pBombPos, _iBombCount);
		break;
	case'P':
	case'p':
		if (SetPortal(_Maze, _pAlpha, _pBeta))
			break;
		if (_Maze[_pPlayerPos->y][_pPlayerPos->x] == ROAD)
			_Maze[_pPlayerPos->y][_pPlayerPos->x] = PORTAL;
		break;
	}

	return true;
}

bool Clear(PPOINT _pPlayerPos, PPOINT _pDestPos)
{
	if (_pPlayerPos->x == _pDestPos->x && _pPlayerPos->y == _pDestPos->y)
	{
		cout << "You have arrived !!!" << endl;
		return true;
	}

	return false;
}

int main()
{
	char szMaze[MAZE_Y][MAZE_X] = {};

	srand((unsigned int)time(NULL));

	POINT tPlayerPos;
	POINT tBombPos[MAX_BOMB] = {};
	POINT tStartPos, tDestPos;
	POINT tPortalAlpha, tPortalBeta;
	int _iBombCount = 0;

	SetMaze(szMaze, &tPlayerPos, &tStartPos, &tDestPos);
	
	while (true)
	{
		system("cls");

		Render(szMaze, &tPlayerPos);

		cout << endl << "W:↑  S:↓  A:←  D:→  B: Plant bomb  F: Detonate bomb  P: Set portal  X:Exit" << endl;

		if (bool isClear = Clear(&tPlayerPos, &tDestPos))
			break;

		POINT tPrev = tPlayerPos;

		if (bool isExit = !MovePlayer(szMaze, &tPlayerPos, tBombPos, &tPortalAlpha, &tPortalBeta, &_iBombCount))
			break;

		bool bPortal = SetPortal(szMaze, &tPortalAlpha, &tPortalBeta);

		if (bPortal && (tPrev.x != tPlayerPos.x || tPrev.y != tPlayerPos.y))
			Portal(szMaze, &tPlayerPos, &tPortalAlpha, &tPortalBeta);
	}


	return 0;
}
