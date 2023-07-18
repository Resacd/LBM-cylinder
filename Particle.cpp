#include "Particle.h"

Particle::Particle(double x, double y, double z, double vx, double vy, double vz)
    : x_position(x), y_position(y), z_position(z), x_velocity(vx), y_velocity(vy), z_velocity(vz), isActive(true) {}

Particle::~Particle() {
    // Destructor implementation, if needed
}
