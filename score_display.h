#ifndef SCORE_DISPLAY_H
#define SCORE_DISPLAY_H

#include <QGraphicsItem>

class ScoreDisplay : public QGraphicsItem
{
public:
    ScoreDisplay();
    void setScore(int score);
    void IncreaseScore(int score){m_Score+=score;}
    void resetScore(){m_Score=0;}
    int getScore() {return m_Score;}

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    int m_X;
    int m_Y;
    int m_Width;
    int m_Height;
    int m_Score;
};

#endif // SCORE_DISPLAY_H