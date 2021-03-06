/*
 * Scene.h
 *
 *  Created on: Jul 24, 2011
 *      Author: nh
 */

#ifndef SCENE_H_
#define SCENE_H_
#include <vector>
#include "primitives/Primitive.h"
#include "primitives/PlanePrim.h"
#include "primitives/Sphere.h"

class Scene {
  public:
  std::vector<Primitive*> primitives;
  std::vector<Primitive*> lights;
  Scene();
  virtual ~Scene();

  Vector3d getRandomPointOnHalfSphere(double radius);
  Vector3d getHaltonPointOnHalfSphere(int id, double radius);
  Vector3d getPointOnSphere(double radius, double theta, double z);
  Vector3d rotateVector(Vector3d vector, Vector3d normal1, Vector3d normal2);
  float halton(int id, int prime);
};

#endif /* SCENE_H_ */
