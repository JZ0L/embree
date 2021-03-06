// ======================================================================== //
// Copyright 2009-2016 Intel Corporation                                    //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#pragma once

#include "../../../common/math/vec3.h"
#include "../tutorial/camera.h"

namespace embree
{
  /* initialize renderer */
  void init(const char* cfg);

  /* keypressed event */
  void key_pressed(int key);

  /* passes parameters to the backend */
  void set_parameter(size_t parm, ssize_t val);

  /* resize framebuffer */
  void resize(int width, int height);

  /* set scene to use */
  struct TutorialScene;
  void set_scene (TutorialScene* in);

  void set_scene_keyframes(TutorialScene** in, size_t numKeyFrames);

  /* pick event */
  bool pick(const float x, const float y, const ISPCCamera& camera, Vec3fa& hitPos);

  /* render frame and map framebuffer */
  void render(const float time, const ISPCCamera& camera);

  /* map framebuffer */
  int* map ();
  
  /* unmap framebuffer */
  void unmap ();

  /* cleanup renderer */
  void cleanup();
}
