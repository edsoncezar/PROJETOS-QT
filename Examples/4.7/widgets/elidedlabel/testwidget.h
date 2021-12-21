#ifndef TESTWIDGET_H
#define TESTWIDGET_H

#include <QWidget>
#include <QStringList>
#include <QSlider>
#include <QComboBox>

class ElidedLabel;

//! [0]
class TestWidget : public QWidget
{
    Q_OBJECT

public:
    TestWidget(QWidget *parent = 0);

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void switchText();
    void onWidthChanged(int width);
    void onHeightChanged(int height);

private:
    int sampleIndex;
    QStringList textSamples;
    ElidedLabel *elidedText;
    QSlider *heightSlider;
    QSlider *widthSlider;
};
//! [0]

#endif // TESTWIDGET_H
