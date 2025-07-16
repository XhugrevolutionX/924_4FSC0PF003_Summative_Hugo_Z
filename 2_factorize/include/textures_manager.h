//
// Created by hugze on 16.07.2025.
//

#ifndef TEXTURES_MANAGER_H
#define TEXTURES_MANAGER_H
#include <SFML/Graphics/Texture.hpp>
#include <array>

namespace TexturesManager {

inline std::array<sf::Texture, 36> textures_;

  void LoadTextures();
  sf::Texture* GetTexture(int id);

};

#endif //TEXTURES_MANAGER_H
