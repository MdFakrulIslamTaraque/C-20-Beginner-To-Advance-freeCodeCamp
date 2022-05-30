#include "cylinder_class.h"
#include "contants.h"


    //default constructor is not declared in the cpp files
    //user defined constructor(when only user defined constructor is defined, default constructor is not generated
    //but the empty paramter constructor must not be used while default constructor is being used
    /*C_cylinder()
    {
        base_radius = 1.0;
        height = 1.0;
    }*/
    C_cylinder::C_cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }

    //getters
    double C_cylinder:: get_base_rad()
    {
        return base_radius;
    }
    double C_cylinder::get_height()
    {
        return height;
    }

    //setters
    void C_cylinder:: set_base_radius(double rad_param)
    {
        base_radius = rad_param;
    }
    void C_cylinder:: set_height(double rad_height)
    {
        height = rad_height;
    }

    double C_cylinder:: CF_volume() {
        return PI * base_radius * base_radius * height;
    }
