/*Copyright (c) 2013-2018 Hanson Robotics, Ltd.*/
#ifndef SCROLLLISTPROPERTY_H
#define SCROLLLISTPROPERTY_H

#include <QWidget>
#include <QScrollBar>
#include <QGridLayout>

#include "listProperty.h"

class ScrollListProperty: public QWidget
{

    Q_OBJECT

public:

    /***********************************************************
    * Constructor                                              *
    ***********************************************************/

    ScrollListProperty(int _width, int _scrollBarWidth, int _height);

    /***********************************************************
    * Destructor                                               *
    ***********************************************************/

    ~ScrollListProperty();

    /***********************************************************
    * Access the list                                          *
    ***********************************************************/

    ListProperty *getListProperty();

public slots:

    /***********************************************************
    * Slots                                                    *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Resize occured                                        |
    // +-------------------------------------------------------+

    void resizeOccured();

protected:

    /***********************************************************
    * Events                                                   *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Resize occurs                                         |
    // +-------------------------------------------------------+

    void resizeEvent(QResizeEvent *event);

private:

    /***********************************************************
    * Adjust range of the scroll bar                           *
    ***********************************************************/
    void adjustRange();

    /***********************************************************
    * Private fields                                           *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Widgets                                               |
    // +-------------------------------------------------------+

    ListProperty *list;
    QScrollBar *scrollBar;
    QGridLayout *grid;

    // +-------------------------------------------------------+
    // | Dimensions                                            |
    // +-------------------------------------------------------+

    int width;
    int scrollBarWidth;
    int height;

};

#endif // SCROLLLISTPROPERTY_H
