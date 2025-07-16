//
// Created by hugze on 16.07.2025.
//

#include "textures_manager.h"

namespace TexturesManager {
  void TexturesManager::LoadTextures() {

    for (int i = 0; i < textures_.size(); ++i) {
      const sf::Texture texture(std::format("_assets/splats/splat{:02d}.png", i));
      textures_[i] = texture;
    }

  }

  sf::Texture* TexturesManager::GetTexture(int id) {
    return &textures_[id];
  }
}