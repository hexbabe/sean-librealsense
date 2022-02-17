// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file devices.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "devices.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

devices::devices()
{
    // m_name com.eprosima.idl.parser.typecode.ArrayTypeCode@8e7350
    memset(&m_name, 0, (255) * 1);

}

devices::~devices()
{
}

devices::devices(
        const devices& x)
{
    m_name = x.m_name;
}

devices::devices(
        devices&& x)
{
    m_name = std::move(x.m_name);
}

devices& devices::operator =(
        const devices& x)
{

    m_name = x.m_name;

    return *this;
}

devices& devices::operator =(
        devices&& x)
{

    m_name = std::move(x.m_name);

    return *this;
}

bool devices::operator ==(
        const devices& x) const
{

    return (m_name == x.m_name);
}

bool devices::operator !=(
        const devices& x) const
{
    return !(*this == x);
}

size_t devices::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += ((255) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    return current_alignment - initial_alignment;
}

size_t devices::getCdrSerializedSize(
        const devices& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    if ((255) > 0)
    {
        current_alignment += ((255) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }

    return current_alignment - initial_alignment;
}

void devices::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_name;


}

void devices::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_name;

}

/*!
 * @brief This function copies the value in member name
 * @param _name New value to be copied in member name
 */
void devices::name(
        const std::array<char, 255>& _name)
{
    m_name = _name;
}

/*!
 * @brief This function moves the value in member name
 * @param _name New value to be moved in member name
 */
void devices::name(
        std::array<char, 255>&& _name)
{
    m_name = std::move(_name);
}

/*!
 * @brief This function returns a constant reference to member name
 * @return Constant reference to member name
 */
const std::array<char, 255>& devices::name() const
{
    return m_name;
}

/*!
 * @brief This function returns a reference to member name
 * @return Reference to member name
 */
std::array<char, 255>& devices::name()
{
    return m_name;
}

size_t devices::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;



    return current_align;
}

bool devices::isKeyDefined()
{
    return false;
}

void devices::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     
}
