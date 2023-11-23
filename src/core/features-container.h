// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2023 Intel Corporation. All Rights Reserved.
#pragma once

#include <src/core/has-features-interface.h>


namespace librealsense {


class features_container : public virtual has_features_interface
{
public:
    bool supports_feature( feature_id id, std::shared_ptr< feature_interface > * feat_obj ) override
    {
        auto it = _features.find( id );
        if( it != _features.end() )
        {
            if( feat_obj != nullptr )
                feat_obj = &it->second;

            return true;
        }

        return false;
    }

    std::map< feature_id, std::shared_ptr< feature_interface > > get_supported_features() override
    {
        return _features;
    }

    void register_feature( const std::string id, std::shared_ptr< feature_interface > feature )
    {
        _features[id] = feature;
    }

protected:
    std::map< feature_id, std::shared_ptr< feature_interface > > _features;
};


}  // namespace librealsense
