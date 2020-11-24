#pragma once

#include "lve_pipeline.hpp"
#include "lve_window.hpp"

namespace lve {
class FirstApp {
 public:
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

  void run();

 private:
  LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
  LvePipeline pipeline{"./simple_shader.vert.spv", "./simple_shader.frag.spv"};
};
}  // namespace lve
