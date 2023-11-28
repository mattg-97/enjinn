// TODO: remove this
#include <core/kmemory.h>
#include "game.h"
#include <entry.h>
// Definition of function to create game
b8 create_game(game* out_game) {
    out_game->app_config.start_pos_x = 100;
    out_game->app_config.start_pos_y = 100;
    out_game->app_config.start_width = 1280;
    out_game->app_config.start_height = 720;
    out_game->app_config.name = "Enjinn Testbed";
    out_game->update = game_update;
    out_game->initialize = game_intialize;
    out_game->on_resize = game_on_resize;
    out_game->render = game_render;

    // Create the game state
    out_game->state = kallocate(sizeof(game_state), MEMORY_TAG_GAME);

    return TRUE;
}