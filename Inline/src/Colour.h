/*
 * Colour.h
 *
 *  Created on: 05-Apr-2020
 *      Author: Soham
 */

#ifndef COLOUR_H_
#define COLOUR_H_

class Colour
{
public:
	Colour();
	int getBlue() { return colour_blue; }
	void setBlue(int blue) { colour_blue = blue; }
protected:
	int colour_blue, colour_gree, colour_red;
};



#endif /* COLOUR_H_ */
