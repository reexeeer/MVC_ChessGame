// W klasie ChessBoard dodaj deklarację dla QGraphicsItemGroup
#include <QGraphicsItemGroup>
#include <qgraphicsscene.h>

class ChessBoard : public QGraphicsRectItem {
private:
    QGraphicsScene* scene;
    QGraphicsItemGroup* chessPiecesGroup;  // Dodaj deklarację dla grupy
    void draw();

public:
    ChessBoard(QGraphicsScene* sceneIn, QGraphicsItem* parent = nullptr);
    void setPosition(qreal x, qreal y);

};