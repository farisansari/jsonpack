/**
 *  Jsonpack - Utils
 *
 *  Copyright (c) 2015 Yadiel Martinez Gonzalez <ymglez2015@gmail.com>
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "jsonpack/helper.hpp"

JSONPACK_API_BEGIN_NAMESPACE



void json_helper::append_string(buffer &json, const char *key, const char *value)
{
    json.append("\"" , 1);
    json.append( key, strlen(key) ); //key
    json.append("\":", 2);
    json.append( value, strlen(value) ); //value
    json.append(",", 1);
}

JSONPACK_API_END_NAMESPACE
