/*
 * visionAPI.h
 *
 *  Created on: Nov 27, 2018
 *      Author: skfk3
 */

#ifndef VISIONAPI_H_
#define VISIONAPI_H_

static unsigned char * image;
static int width;
static int height;

void setValues(unsigned char * image_, int width_, int height_);
unsigned char getY(int row, int col);
unsigned char getU(int row, int col);
unsigned char getV(int row, int col);
void setY(int row, int col, unsigned char val);
void setU(int row, int col, unsigned char val);
void setV(int row, int col, unsigned char val);

void colorFilter(char plan, int threshold);

unsigned char ABS_(unsigned char num);
void edgeDetection();
void blobDetection(void)
#endif /* VISIONAPI_H_ */
