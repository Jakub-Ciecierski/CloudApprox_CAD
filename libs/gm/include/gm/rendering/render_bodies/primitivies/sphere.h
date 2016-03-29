//
// Created by jakub on 3/29/16.
//

#ifndef MG1_SPHERE_H
#define MG1_SPHERE_H


#include <gm/rendering/render_body.h>

class Sphere : public RenderBody{
private:
    float radius;
    int ringsCount;
    int sectionCount;

protected:
    virtual void initVertices() override;
    virtual void initEdges() override;

public:
    Sphere(float radius,
           int ringsCount, int sectionCount);
    ~Sphere();

    virtual float intersect(const RayCast &ray) override;
};


#endif //MG1_SPHERE_H