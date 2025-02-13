#ifndef GRAPHICS_SHADER_MODULE_H_
#define GRAPHICS_SHADER_MODULE_H_

#include <filesystem>

#include <vulkan/vulkan.hpp>

namespace gfx {

class ShaderModule {
public:
  ShaderModule(vk::Device device, vk::ShaderStageFlagBits shader_stage, const std::filesystem::path& glsl_filepath);

  [[nodiscard]] vk::ShaderModule operator*() const noexcept { return *shader_module_; }

private:
  vk::UniqueShaderModule shader_module_;
};

}  // namespace gfx

#endif  // GRAPHICS_SHADER_MODULE_H_
