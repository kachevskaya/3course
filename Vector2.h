//
// Created by 1 on 29.11.2022.
//

#ifndef HELLO_WORLD_VECTOR2_H
#define HELLO_WORLD_VECTOR2_H


class Vector2 {
public:
    double x, y;

    Vector2();
    Vector2(double _x, double _y);

    void setX(double _x);
    double getX();
    void setY(double _y);
    double getY();

    double getR();
    double getPhi();
    double getA();
    double getPSK();
    double operator*(const Vector2& vector) const;
    double operator=(const Vector2& vector) const;
    double operator|(const Vector2& vector) const;
    double operator&(const Vector2& vector) const;
    double operator<<(const Vector2& vector) const;

    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator-(const Vector2& vector) const;
    //Vector2 operator*(const double & a) const;
    Vector2 operator/(const double & a) const;


    Vector2 operator2(const Vector2& vector) const;


};


#endif //HELLO_WORLD_VECTOR2_H
