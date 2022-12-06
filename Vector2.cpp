//
// Created by 1 on 29.11.2022.
//
#include <iostream>
#include <cmath>
#include "Vector2.h"

Vector2::Vector2(): x(0.0), y (0.0) {};
Vector2::Vector2(double _x, double _y): x(_x), y (_y) {};

void Vector2::setX(double _x){
    x = _x;
}
void Vector2::setY(double _y){
    y = _y;
}

double Vector2::getX(){
    return x;
}
double Vector2::getY(){
    return y;
}

double Vector2::getR(){
    return std::sqrt(x*x + y*y);
}

double Vector2::getPhi(){
    return std::atan2(y, x);
}

double Vector2::getPSK(){
    return std::sqrt(x*x + y*y)*cos(atan2(y, x)),sqrt(x*x + y*y)*sin(atan2(y, x)); // Перевод в пск
}
double Vector2::getA(){
    return std::acos(x/y)*180/3.1415;  // угол в градусах
}
double Vector2::operator|(const Vector2& vector) const{
    return (x/sqrt(x*x + y*y),y/sqrt(x*x + y*y));  // норма
}
double Vector2::operator*(const Vector2& vector) const{ //скалярное умножение
    return (x * vector.x + y * vector.y);
}
//double Vector2::operator*(const Vector2& vector) const{ // псевдоскалярное умножение
    //return (sqrt(x*x + y*y)*sqrt(vector.x*vector.x + vector.y+vector.y)*(y/x));
//}
double Vector2::operator&(const Vector2& vector) const{ //
    return (sqrt(x*x + y*y))*sqrt(vector.x*vector.x + vector.y+vector.y)*((y+vector.y)/(x+vector.x)); //углово расстояние между векторами
}
double Vector2::operator<<(const Vector2& vector) const{
    return (x*cos(angel)-y*sin(angle),y*cos(angel)+x*sin(angle));
}

Vector2 Vector2::operator+(const Vector2& vector) const{ // сложение векторов
    return Vector2(x + vector.x, y + vector.y);
}
Vector2 Vector2::operator-(const Vector2& vector) const{  // вычетание векторов
    return Vector2(x - vector.x, y - vector.y);
}
//Vector2 Vector2::operator*(const double& a) const{   //умножение на число //Увеличение длины без изменения угла
//    return Vector2(x * a, y * a);
//}
Vector2 Vector2::operator/(const double& a) const{   //деление на число
    return Vector2(x / a, y / a);
}

double Vector2::operator=(const Vector2& vector) const{
    if(x == vector.x && y == vector.y){
        return 0;
    }
    if(x != vector.x && y == vector.y){
        return 1;
    }
    if(x == vector.x,y != vector.y){
        return 1;
    }
    if(x != vector.x,y != vector.y){
        return 1;
    }
}