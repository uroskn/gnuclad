/*
*  generatorSVG.h - PNG generator header for gnuclad
*
*  Copyright (C) 2010 Donjan Rodic <drodic@student.ethz.ch>
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef GENERATORPNG_H_
#define GENERATORPNG_H_

#include "gnuclad.h"


class GeneratorPNG: public Generator {
  public:

  GeneratorPNG();
  void writeData(Cladogram * clad, std::ofstream * fp);
};


#endif