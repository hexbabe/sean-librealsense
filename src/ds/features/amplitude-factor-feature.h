// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2023 Intel Corporation. All Rights Reserved.

#pragma once


#include <src/feature-interface.h>


namespace librealsense {

class amplitude_factor_feature : public feature_interface
{
public:
    static const feature_id ID;

    amplitude_factor_feature() : feature_interface( ID )
    {
    }
};

}  // namespace librealsense
