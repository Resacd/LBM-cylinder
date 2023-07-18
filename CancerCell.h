#pragma once
#ifndef _CANCER_CELL_H_
#define _CANCER_CELL_H_

class CancerCell {
public:

    CancerCell(double posX, double posY, double posZ, int cellID);
    void update();
    void checkInteractions();
    void divide();
    void die();
    void migrate();

private:

    int ID;
    float positionX;
    float positionY;
    float positionZ;
};

#endif // !_CANCER_CELL_H_
