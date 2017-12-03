/*
 * helper.hpp
 *
 *  Created on: Dec 1, 2017
 *      Author: james
 */

#ifndef HELPER_HELPER_HPP_
#define HELPER_HELPER_HPP_

#include <GL/glew.h>

#include <iostream>

std::string readFile(const char * filePath);

GLuint loadShaders(const char *vertex_path, const char * fragment_path);

#endif /* HELPER_HELPER_HPP_ */
