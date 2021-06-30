#pragma once
enum class GomokuBoardValue
{
	EMPTY,
	WHITE,
	BLACK
};
class GomokuBoardState
{
public:
	GomokuBoardState();
	GomokuBoardState(GomokuBoardValue boardValue);
	GomokuBoardValue GetBoardValue();
	bool GetBlackBanned();
	void SetBoardValue(GomokuBoardValue boardValue);
	void SetBlackBanned(bool blackBanned);
private:
	GomokuBoardValue boardValue;
	bool blackBanned = false;
};