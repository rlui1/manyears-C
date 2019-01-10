/*Copyright (c) 2013-2018 Hanson Robotics, Ltd.*/
#ifndef COLORID_H
#define COLORID_H

#include <QWidget>
#include <QColor>


class ColorID
{

public:

    /***********************************************************
    * Constructor                                              *
    ***********************************************************/

    ColorID();
    ColorID(int _id, int _red, int _green, int _blue);

    /***********************************************************
    * Accessors                                                *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Acccessor: Color ID                                   |
    // +-------------------------------------------------------+

    int getID();

    // +-------------------------------------------------------+
    // | Acccessor: Color RBG                                  |
    // +-------------------------------------------------------+

    QColor getColor();

    /***********************************************************
    * Mutators                                                 *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Mutator: Color ID                                     |
    // +-------------------------------------------------------+

    void setID(int _id);

    // +-------------------------------------------------------+
    // | Mutator: Color RBG                                    |
    // +-------------------------------------------------------+

    void setColor(int _red, int _green, int _blue);

    /***********************************************************
    * Other functions                                          *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Use this color                                        |
    // +-------------------------------------------------------+

    void use();

    // +-------------------------------------------------------+
    // | Free this color                                       |
    // +-------------------------------------------------------+

    void free();

    // +-------------------------------------------------------+
    // | Check if color is free                                |
    // +-------------------------------------------------------+
    bool isFree();


private:

    /***********************************************************
    * Private fields                                           *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Color ID                                              |
    // +-------------------------------------------------------+

    int id;

    // +-------------------------------------------------------+
    // | Color RBG                                             |
    // +-------------------------------------------------------+

    QColor rbg;

    // +-------------------------------------------------------+
    // | Color usage                                           |
    // +-------------------------------------------------------+

    bool isUsed;

};


#endif // COLORID_H
