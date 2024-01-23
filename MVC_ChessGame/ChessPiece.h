#pragma once
#include <qstring.h>
#include "Position.h"
#include <qlist.h>

enum PieceType
{
	Pawn, Rook, Bishop, Knight, Queen, King
};

enum Player
{
	Black, White
};

class ChessPiece
{
private:
	Position position;
	bool didTakeFirstMove;
	Player player;
	QList<Position> possibleMoves;
public:
	ChessPiece(Position position, Player player);
	virtual ~ChessPiece() = default;
	const QList<Position> getPossibleMoves();
	void setPossibleMoves(QList<Position> legalMoves);
	const PieceType getPieceType();
	const Player getPlayer();
protected:
	PieceType type;
};
