#pragma once

#include <defines.h>
#include <game_types.h>

typedef struct game_state {
    f32 delta_time;
} game_state;

// as they are function pointers, the name of the function doesnt matter
// the only thing that matters are the parameters and the return type
// aslong as the params and return are the same then these will work as definitions for the function pointers
b8 game_intialize(game* game_inst);

b8 game_update(game* game_inst, f32 delta_time);

b8 game_render(game* game_inst, f32 delta_time);

void game_on_resize(game* game_inst, u32 width, u32 height);
