#pragma once
#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3 {
public:
    Vector3();
    Vector3(double x, double y, double z);

    double GetX() const;
    double GetY() const;
    double GetZ() const;

    void SetX(double x);
    void SetY(double y);
    void SetZ(double z);

    Vector3 operator+(const Vector3& other) const;
    Vector3& operator+=(const Vector3& other);
    Vector3 operator*(double scalar) const;
    Vector3& operator*=(double scalar);
    Vector3 operator-() const;
    Vector3 operator/(double scalar) const;
    Vector3& operator/=(double scalar);

//private:
    double x;
    double y;
    double z;
};

#endif  // VECTOR3_H
