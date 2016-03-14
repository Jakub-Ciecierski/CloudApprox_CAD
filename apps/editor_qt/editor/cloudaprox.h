#ifndef CLOUDAPROX_H
#define CLOUDAPROX_H

#include "glm/vec3.hpp"
#include "vector"

using namespace glm;
using namespace std;

class CloudAprox
{
public:
    CloudAprox();
    CloudAprox(vector<vec3> orginalVertices, vector<vec3> cloudVertices);

    void findCloudPos();
    float calculateDistance();
    int findXRotation();
    int findYRotation();
    int findZRotation();

private:
    vector<vec3> orginalVertices;
    vector<vec3> cloudVertices;
};

#endif // CLOUDAPROX_H
