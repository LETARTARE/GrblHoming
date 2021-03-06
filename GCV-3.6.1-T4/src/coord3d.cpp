#include "coord3d.h"
/*
Coord3D::Coord3D()
    : x(0.0), y(0.0), fourth(0.0), stoppedZ(true), sliderZIndex(0)
{
}

bool Coord3D::operator==(const Coord3D& rhs)
{
    return (x == rhs.x && y == rhs.y && fourth == rhs.fourth) ;
}
*/
Coord3D::Coord3D()
    : x(0.0), y(0.0), z(0.0), fourth(0.0), stoppedZ(true), sliderZIndex(0)
{
}
/// T4 animator
Coord3D::Coord3D(QVector3D xyz)
	: x(xyz.x()), y(xyz.y()), z(xyz.z()), fourth(0.0)
{
}

bool Coord3D::operator==(const Coord3D& rhs)
{
    return (x == rhs.x && y == rhs.y && z == rhs.z && fourth == rhs.fourth) ;
}

