/*
 * Colour.h
 *
 *  Created on: 04-Apr-2020
 *      Author: Soham
 */

#ifndef COLOUR_H_
#define COLOUR_H_

class Colour
{
public:
	Colour();
	int getRed()
	{
		return m_red;
	}

	void setRed(int red)
	{
		m_red = red;
	}
protected:
	int m_red, m_green, m_blue;
};



#endif /* COLOUR_H_ */
