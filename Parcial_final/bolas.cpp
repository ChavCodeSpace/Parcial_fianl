#include "bolas.h"

Bolas::Bolas()
{
    setRect(0,0,15,15);
}

void Bolas::ActualizarPosicion()
{
    posx=posx+vel_x*delta;
    posy=posy+vel_y*delta-(0.5*g*delta*delta);
    setPos(posx,-posy);
}

void Bolas::ActualizarVelocidad()
{
    vel_x=vel*cos(ang);
    vel_y=vel*sin(ang)-g*delta;
    ang=atan2(vel_y,vel_x);
    vel= sqrt(vel_x*vel_x+ vel_y*vel_y);
}
