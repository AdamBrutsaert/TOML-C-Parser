#pragma once

#include "toml_type.h"

toml_map_t toml_map_create();
void toml_map_destroy(toml_map_t map);

void toml_map_set_integer(toml_map_t map, toml_string_t key, toml_integer_t value);
void toml_map_set_float(toml_map_t map, toml_string_t key, toml_float_t value);
void toml_map_set_boolean(toml_map_t map, toml_string_t key, toml_boolean_t value);
void toml_map_set_string(toml_map_t map, toml_string_t key, toml_string_t value);
void toml_map_set_array(toml_map_t map, toml_string_t key, toml_array_t value);
void toml_map_set_map(toml_map_t map, toml_string_t key, toml_map_t value);

toml_integer_t toml_map_get_integer(toml_map_t map, toml_string_t key);
toml_float_t toml_map_get_float(toml_map_t map, toml_string_t key);
toml_boolean_t toml_map_get_boolean(toml_map_t map, toml_string_t key);
toml_string_t toml_map_get_string(toml_map_t map, toml_string_t key);
toml_array_t toml_map_get_array(toml_map_t map, toml_string_t key);
toml_map_t toml_map_get_map(toml_map_t map, toml_string_t key);
