//
// Created by hugze on 16.07.2025.
//

#include "textures_manager.h"

#include <iostream>

namespace TexturesManager {

void TexturesManager::LoadTextures(const std::string& path) {

    int files_idx = 0;

    sf::Texture texture;

    std::string texture_name = path + std::format("{:02d}.png", files_idx);

    while (texture.loadFromFile(texture_name))
    {
      textures_.emplace_back(texture);
      files_idx++;

      texture_name = path + std::format("{:02d}.png", files_idx);
    }
  }

  sf::Texture *TexturesManager::GetTexture(const int id) {
    return &textures_[id];
  }

  int GetNbTextures() {
    return static_cast<int>(textures_.size());
  }
} // namespace TexturesManager