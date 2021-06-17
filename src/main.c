#include <simple2d.h>

void render() {
 S2D_Sprite *spr = S2D_CreateSprite("assets/sprite_sheet.png");
 spr->x = 150;
 spr->y = 275;
 spr->width  = 100;
 spr->height = 100;
 int x = 150;
 int y = 250;
 int width = 100;
 int height = 100;
 S2D_ClipSprite(spr, x, y, width, height);
 S2D_DrawSprite(spr);
 S2D_FreeSprite(spr);
 
}

int main() {

  S2D_Window *window = S2D_CreateWindow(
    "forest adventure", 1280, 720, NULL, render, 0
  );
  window->icon = "assets/s2d_icon.png";
  S2D_Show(window);
  return 0;
}