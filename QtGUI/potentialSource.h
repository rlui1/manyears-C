/*Copyright (c) 2013-2018 Hanson Robotics, Ltd.*/
#ifndef POTENTIALSOURCE_H
#define POTENTIALSOURCE_H

class PotentialSource
{

public:

    /***********************************************************
    * Constructor                                              *
    ***********************************************************/

    PotentialSource(const float _X, const float _Y, const float _Z, const float _E);
    PotentialSource();

    /***********************************************************
    * Destructor                                               *
    ***********************************************************/

    ~PotentialSource();

    /***********************************************************
    * Accessors                                                *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Position                                              |
    // +-------------------------------------------------------+

    const float getX();
    const float getY();
    const float getZ();

    // +-------------------------------------------------------+
    // | Energy                                                |
    // +-------------------------------------------------------+

    const float getE();

    /***********************************************************
    * Mutators                                                 *
    ***********************************************************/

    // +-------------------------------------------------------+
    // | Position                                              |
    // +-------------------------------------------------------+

    void setX(const float _X);
    void setY(const float _Y);
    void setZ(const float _Z);

    // +-------------------------------------------------------+
    // | Energy                                                |
    // +-------------------------------------------------------+

    void setE(const float _E);

private:

    /***********************************************************
    * Fields                                                   *
    ***********************************************************/

    float X, Y, Z;
    float E;

};


#endif
