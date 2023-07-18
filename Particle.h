#ifndef PARTICLE_H
#define PARTICLE_H

class Particle {
public:
    double x_position;
    double y_position;
    double z_position;
    double x_velocity;
    double y_velocity;
    double z_velocity;
    bool isActive;

    Particle(double x, double y, double z, double vx, double vy, double vz)
        : x_position(x), y_position(y), z_position(z), x_velocity(vx), y_velocity(vy), z_velocity(vz), isActive(true) {}
};

#endif // PARTICLE_H
