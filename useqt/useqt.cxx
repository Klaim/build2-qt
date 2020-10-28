#include <iostream>

// #include <qt5/QtCore/qatomic.h>

// #include <QGraphicsItem>
// #include <QGraphicsScene>
// #include <QGraphicsPathItem>
// #include <QGraphicsView>
// #include <QFontDatabase>
// #include <QStyleOptionGraphicsItem>

//#include <qt5/QtGui/qimage.h>
#include <QImage>
#include <QPainter>

int main( int argc, char **argv )
{
    QImage image(800, 600, QImage::Format_ARGB32);
    image.fill(Qt::white);

    QPainter painter{&image};
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 30));

    QRectF rectangle(10.0, 20.0, 80.0, 60.0);
    painter.drawRect(rectangle);

    // const QString text1 {"Ce text a été déssiné par Qt dans un projet experimental buildé avec build2"};
    // const QString text2 {"En revanche je n'ai pas cherché a utiliser le MOC system, a priori on en aura pas besoin."};
    // const QPointF pos1(100, 100);
    // const QPointF pos2(100, 200);
    // const QString test = "kikoo";
    // painter.drawText(pos1, test);
    // painter.drawText(pos2, test);

    image.save("output.png");
}

// int main (int argc, char* argv[])
// {
//   using namespace std;

//   if (argc < 2)
//   {
//     cerr << "error: missing name" << endl;
//     return 1;
//   }

//   cout << "Hello, " << argv[1] << '!' << endl;
// }
