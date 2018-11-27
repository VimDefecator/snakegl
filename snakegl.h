#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#define N 20
#define M 20

enum {No, Ri, Do, Le, Up, Fo};

enum {UNIF_ROTM1, UNIF_ROTM2, UNIF_MOVV, UNIF_NUM};

struct snake_t {
  int hx, hy, tx, ty, dir;
};

extern char field[N][M];
extern struct snake_t snake;

extern GLuint vao_id,
              vbo_id,
              prog_id;

extern GLint unif_loc[UNIF_NUM];

void init();
GLuint load_shaders (char*, char*);

void draw_func();
void move_func (int);
void rot_func (int);
void keyb_func (unsigned char, int, int);