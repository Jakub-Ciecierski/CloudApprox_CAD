//
// Created by jakub on 3/29/16.
//

#include <gm/rendering/render_bodies/primitivies/sphere.h>

using namespace glm;

//-----------------------//
//  CONSTRUCTORS
//-----------------------//

Sphere::Sphere(float radius,
               int ringsCount, int sectionCount) :
        radius(radius), ringsCount(ringsCount), sectionCount(sectionCount) {
    initVertices();
    initEdges();
    transformedVertices.resize(vertices.size());

    drawingMode = GL_TRIANGLE_FAN;
}

Sphere::~Sphere() {

}

//-----------------------//
//  PROTECTED
//-----------------------//

void Sphere::initVertices() {
    float R = 1.0 / (float) (ringsCount -1);
    float S = 1.0 / (float) (sectionCount -1);

    for(int r = 0; r < ringsCount; r++){
        for(int s = 0; s < sectionCount; s++){

            float x = cos(2*M_PI * s * S) * sin(M_PI * r * R);
            float y = sin(-M_PI/2.0 + (M_PI * r * R));
            float z = sin(2*M_PI * s * S) * sin(M_PI * r * R);

            x *= radius;
            y *= radius;
            z *= radius;

            vertices.push_back(vec4(x,y,z,1));
        }
    }
}

void Sphere::initEdges() {
    for(int r = 0; r < ringsCount - 1; r++){
        for(int s = 0; s < sectionCount - 1; s++){
            int i = r * sectionCount + s;
            int j = r * sectionCount + (s+1);

            int k = (r + 1) * sectionCount + (s+1);
            int l = (r + 1) * sectionCount + (s);

            edges.push_back(Edge(i,j));
            edges.push_back(Edge(j,k));
            edges.push_back(Edge(k,l));
        }
    }
}

//-----------------------//
//  PUBLIC
//-----------------------//

float Sphere::intersect(const RayCast & ray){
    return RAYCAST_NO_SOLUTION;
}
