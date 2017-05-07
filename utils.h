#ifndef UTILS_HPP
#define UTILS_HPP
#include "format_parser.h"
#include "formats.h"

#include "wav_decoder.h"
//#include "mp3_decoder.h"
//#include "bmp_decoder.h"
//#include "jpg_decoder.h"
//#include "png_decoder.h"
#include <fstream>
#include <iostream>


const bool msg_to_file(const std::string& message, const std::string& file_name);
const bool decode(const std::string& input_file, const std::string& output_file);

#endif // UTILS_HPP