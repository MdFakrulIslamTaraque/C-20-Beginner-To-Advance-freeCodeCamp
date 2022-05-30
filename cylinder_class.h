#ifndef CYLINDER_CLASS_H
#define CYLINDER_CLASS_H
class C_cylinder {
    //member variales
    double base_radius;
    double height;

public:
    //default constructor(not defined in cpp file)
    C_cylinder() = default;

    //user defined constructor(when only user defined constructor is defined, default constructor is not generated
    //but the empty paramter constructor must not be used while default constructor is being used
    /*C_cylinder()
    {
        base_radius = 1.0;
        height = 1.0;
    }*/
    C_cylinder(double radius_param, double height_param);

    //getters
    double get_base_rad();
    double get_height();
    //setters
    void set_base_radius(double rad_param);
    void set_height(double rad_height);
    double CF_volume();
};
#endif // !CYLINDER_CLASS_H

