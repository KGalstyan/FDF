#ifndef MINIK_H
#define MINIK_H
#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <mlx.h>

#define OFF_ESC 53
#define OFF_X 20
#define WIN_WIDTH 1280
#define WIN_HEIGHT 720

# define KEY_PRESS 2
# define KEY_PRESS_MASK 1

# define DESTROY_NOTIFY 17
# define NO_EVENT_MASK 0

#define X_GAP 30
#define Y_GAP 30

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
    int     color;
}				t_img;

typedef struct  s_data
{
    int x2;
    int x1;
    int y1;
    int y2;
    int z1;
    int z2;

}               t_data;

typedef struct  s_data_fl
{
    float x;
    float y;

}               t_data_fl;

typedef struct s_point
{
    int x;
    int y;
    int z;
    // int color;
}               t_point;

typedef struct s_operators
{
    float angle;
    float x_izo;
    float y_izo;
    float z_izo;

}               t_operators;


// typedef struct  s_line
// {
//     int dx;
//     int dy;
//     int p;
//     int x;
//     int y;
//     int i;
// }               t_line;

#endif