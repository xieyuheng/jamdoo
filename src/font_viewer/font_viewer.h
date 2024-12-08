#pragma once

struct font_viewer_t {
    canvas_t *canvas;
    font_t *font;
};

font_viewer_t *font_viewer_new(font_t *font);
void font_viewer_destroy(font_viewer_t **self_pointer);

void font_viewer_open(font_viewer_t *self);
void font_viewer_start(font_t *font);
