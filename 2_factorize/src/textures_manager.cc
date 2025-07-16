//
// Created by hugze on 16.07.2025.
//

#include "textures_manager.h"

#include <iostream>

namespace TexturesManager {

std::size_t number_of_files_in_directory(std::filesystem::path path) {
  using std::filesystem::directory_iterator;

  return std::distance(directory_iterator(path), directory_iterator{});
 }

void TexturesManager::LoadTextures(const std::string &path, const std::string &name) {

  sf::Texture texture;

  //std::cout << number_of_files_in_directory(path, name) << std::endl;

  for (int i = 0; i < number_of_files_in_directory(path); i++) {
    std::string texture_full_path = path + name + std::format("{:02d}.png", i);

    //std::cout << texture_full_path << std::endl;

    if (texture.loadFromFile(texture_full_path)) {
      textures_.emplace_back(texture);
    }
    else {
      break;
    }
  }
}

sf::Texture *TexturesManager::GetTexture(const int id) {
  return &textures_[id];
}

int GetNbTextures() { return static_cast<int>(textures_.size()); }

} // namespace TexturesManager