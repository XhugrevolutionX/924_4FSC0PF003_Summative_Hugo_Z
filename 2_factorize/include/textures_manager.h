//
// Created by hugze on 16.07.2025.
//

#ifndef TEXTURES_MANAGER_H
#define TEXTURES_MANAGER_H
#include <SFML/Graphics/Texture.hpp>
#include <array>

namespace TexturesManager {

  inline std::vector<sf::Texture> textures_;

  void LoadTextures(const std::string& path, const std::string& name);

  sf::Texture* GetTexture(int id);

  int GetNbTextures();

};

#endif //TEXTURES_MANAGER_H
