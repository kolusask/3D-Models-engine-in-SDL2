//
// Created by askar on 10.09.19.
//

#pragma once

// Screen dimensions
#define WIDTH 600
#define HEIGHT 600

// Number of pixels for ( [0, 0, 0], [1, 0, 0] ) line
#define UNIT_SIZE 60.

// Coefficient of parallaxing shifting of the points
#define PERSPECTIVE 10

// Angle of rotation
#define ROT_ANGLE 0.1

// Distance of translation
#define MOVE_DIST 0.2

// Constants for increasing memory and (possibly) time efficiency
#define FAST_LOADING  // Uncomment for faster loading and slower moving;
                        //  when commented out, the neighboring points are united.
#define PRECISION 20    // When Fast loading is disabled, affects the distance at which the neighboring points
                        //  are united.
