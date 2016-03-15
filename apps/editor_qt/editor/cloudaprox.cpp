#include "cloudaprox.h"

CloudAprox::CloudAprox()
{

}

CloudAprox::CloudAprox(vector<vec3> orginalVertices, vector<vec3> cloudVertices){
    this->CloudAprox = cloudVertices;
    this->orginalVertices = orginalVertices;
}

void CloudAprox::findCloudPos(){

    //values of rotations on given axis for which a sum of distances beteween points from orginal shape and cloud was the smallest
    int bestXRotation;
    int bestYRotation;
    int bestZRotation;

    for(int i=0;i<orginalVertices.size();i++)
    {
        vec3 diff = orginalVertices[i] = cloudVertices;
        //translate whole object by the differencec of currently checked vertex from orginal shape
        cloudVertices.translate(diff);

        bestXRotation = findXRotation();
        cloudVertices.rotate(bestXRotation,0,0);
        bestYRotation = findYRotation();
        cloudVertices.rotate(0,bestYRotation,0);
        bestZRotation = findZRotation();
        cloudVertices.rotate(0,0,bestZRotation);

    }
}

int CloudAprox::findXRotation(){
    //angle of given rotation for which distance is the smallest
    int bestAngle;
    float bestDistance = calculateDistance();
    //rotation on axis X
    for(int rx=1;rx<360;rx++){
        cloudVertices.rotateTMP(rx,0,0);
        float currentDistance =  calculateDistance();

        if(currentDistance < bestDistance){
            bestDistance = currentDistance;
            bestAngle = rx;
        }
    }
    return bestAngle;
}

int CloudAprox::findYRotation(){
    //angle of given rotation for which distance is the smallest
    int bestAngle;
    float bestDistance = calculateDistance();
    //rotation on axis X
    for(int ry=1;ry<360;ry++){
        cloudVertices.rotateTMP(0,ry,0);
        float currentDistance =  calculateDistance();

        if(currentDistance < bestDistance){
            bestDistance = currentDistance;
            bestAngle = ry;
        }
    }
    return bestAngle;
}

int CloudAprox::findZRotation(){
    //angle of given rotation for which distance is the smallest
    int bestAngle;
    float bestDistance = calculateDistance();
    //rotation on axis X
    for(int rz=1;rz<360;rz++){
        cloudVertices.rotateTMP(rz,0,0);
        float currentDistance =  calculateDistance();

        if(currentDistance < bestDistance){
            bestDistance = currentDistance;
            bestAngle = rz;
        }
    }
    return bestAngle;
}

float calculateDistance()
{
    float sumOfSmallestDistances = 0;
    for(int i=0;i<cloudVertices.size;i++)
    {
        float currentVertexDistance = distance(cloudVertices[i],orginalVertices[0]);
        for(int j=1;j<orginalVertices.size;j++)
        {
            tmpDist = distance(cloudVertices[i],orginalVertices[j]);
            if(tmpDist<currentVertexDistance){
                currentVertexDistance = tmpDist;
            }
        }
        sumOfSmallestDistances += currnetVertexDistance;
    }
    return sumOfSmallestDistances;
}
