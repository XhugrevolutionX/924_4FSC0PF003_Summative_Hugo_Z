//
// Created by hugze on 16.07.2025.
//

#include "textures_manager.h"

#include <iostream>

namespace TexturesManager {

void TexturesManager::LoadTextures(const std::string& path) {

    bool more_textures_ = true;
    int files_idx = 0;

    while (more_textures_)
    {
      sf::Texture texture;

      std::string texture_name = path + std::format("{:02d}.png", files_idx);

      if (texture.loadFromFile(texture_name))
      {
        textures_.emplace_back(texture);
        files_idx++;
      }
      else
      {
        more_textures_ = false;
      }
    }
  }

  sf::Texture *TexturesManager::GetTexture(int id) {
    return &textures_[id];
  }


  int GetNbTextures() {
    return textures_.size();
  }
} // namespace TexturesManager