// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2022 Intel Corporation. All Rights Reserved.

/*!
 * @file flexibleTypeObject.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include <realdds/topics/flexible/flexible.h>
#include "flexibleTypeObject.h"
#include <utility>
#include <sstream>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastrtps/types/AnnotationParameterValue.h>
#include <fastcdr/FastBuffer.h>
#include <fastcdr/Cdr.h>

using namespace eprosima::fastrtps::rtps;

void registerflexibleTypes()
{
    TypeObjectFactory *factory = TypeObjectFactory::get_instance();
    factory->add_type_object("realdds::topics::raw::flexible_data_format", realdds::topics::raw::Getflexible_data_formatIdentifier(true),
            realdds::topics::raw::Getflexible_data_formatObject(true));
    factory->add_type_object("realdds::topics::raw::flexible_data_format", realdds::topics::raw::Getflexible_data_formatIdentifier(false),
            realdds::topics::raw::Getflexible_data_formatObject(false));

    factory->add_type_object("realdds::topics::raw::flexible", realdds::topics::raw::GetflexibleIdentifier(true),
            realdds::topics::raw::GetflexibleObject(true));
    factory->add_type_object("realdds::topics::raw::flexible", realdds::topics::raw::GetflexibleIdentifier(false),
            realdds::topics::raw::GetflexibleObject(false));




}

namespace realdds {
    namespace topics {
        namespace raw {
            const TypeIdentifier* Getflexible_data_formatIdentifier(bool complete)
            {
                const TypeIdentifier* c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("flexible_data_format", complete);
                if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
                {
                    return c_identifier;
                }

                Getflexible_data_formatObject(complete); // Generated inside
                return TypeObjectFactory::get_instance()->get_type_identifier("flexible_data_format", complete);
            }

            const TypeObject* Getflexible_data_formatObject(bool complete)
            {
                const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("flexible_data_format", complete);
                if (c_type_object != nullptr)
                {
                    return c_type_object;
                }
                else if (complete)
                {
                    return GetCompleteflexible_data_formatObject();
                }
                // else
                return GetMinimalflexible_data_formatObject();
            }

            const TypeObject* GetMinimalflexible_data_formatObject()
            {
                const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("flexible_data_format", false);
                if (c_type_object != nullptr)
                {
                    return c_type_object;
                }

                TypeObject *type_object = new TypeObject();
                type_object->_d(EK_MINIMAL);
                type_object->minimal()._d(TK_ENUM);

                // No flags apply
                //type_object->minimal().enumerated_type().enum_flags().IS_FINAL(false);
                //type_object->minimal().enumerated_type().enum_flags().IS_APPENDABLE(false);
                //type_object->minimal().enumerated_type().enum_flags().IS_MUTABLE(false);
                //type_object->minimal().enumerated_type().enum_flags().IS_NESTED(false);
                //type_object->minimal().enumerated_type().enum_flags().IS_AUTOID_HASH(false);

                type_object->minimal().enumerated_type().header().common().bit_bound(32); // TODO fixed by IDL, isn't?

                uint32_t value = 0;
                MinimalEnumeratedLiteral mel_FLEXIBLE_DATA_JSON;
                mel_FLEXIBLE_DATA_JSON.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
                mel_FLEXIBLE_DATA_JSON.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
                mel_FLEXIBLE_DATA_JSON.common().flags().IS_EXTERNAL(false); // Doesn't apply
                mel_FLEXIBLE_DATA_JSON.common().flags().IS_OPTIONAL(false); // Doesn't apply
                mel_FLEXIBLE_DATA_JSON.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
                mel_FLEXIBLE_DATA_JSON.common().flags().IS_KEY(false); // Doesn't apply
                mel_FLEXIBLE_DATA_JSON.common().flags().IS_DEFAULT(false);
                mel_FLEXIBLE_DATA_JSON.common().value(value++);
                MD5 FLEXIBLE_DATA_JSON_hash("FLEXIBLE_DATA_JSON");
                for(int i = 0; i < 4; ++i)
                {
                    mel_FLEXIBLE_DATA_JSON.detail().name_hash()[i] = FLEXIBLE_DATA_JSON_hash.digest[i];
                }
                type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_FLEXIBLE_DATA_JSON);

                MinimalEnumeratedLiteral mel_FLEXIBLE_DATA_CBOR;
                mel_FLEXIBLE_DATA_CBOR.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CBOR.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CBOR.common().flags().IS_EXTERNAL(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CBOR.common().flags().IS_OPTIONAL(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CBOR.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CBOR.common().flags().IS_KEY(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CBOR.common().flags().IS_DEFAULT(false);
                mel_FLEXIBLE_DATA_CBOR.common().value(value++);
                MD5 FLEXIBLE_DATA_CBOR_hash("FLEXIBLE_DATA_CBOR");
                for(int i = 0; i < 4; ++i)
                {
                    mel_FLEXIBLE_DATA_CBOR.detail().name_hash()[i] = FLEXIBLE_DATA_CBOR_hash.digest[i];
                }
                type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_FLEXIBLE_DATA_CBOR);

                MinimalEnumeratedLiteral mel_FLEXIBLE_DATA_CUSTOM;
                mel_FLEXIBLE_DATA_CUSTOM.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CUSTOM.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_EXTERNAL(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_OPTIONAL(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_KEY(false); // Doesn't apply
                mel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_DEFAULT(false);
                mel_FLEXIBLE_DATA_CUSTOM.common().value(value++);
                MD5 FLEXIBLE_DATA_CUSTOM_hash("FLEXIBLE_DATA_CUSTOM");
                for(int i = 0; i < 4; ++i)
                {
                    mel_FLEXIBLE_DATA_CUSTOM.detail().name_hash()[i] = FLEXIBLE_DATA_CUSTOM_hash.digest[i];
                }
                type_object->minimal().enumerated_type().literal_seq().emplace_back(mel_FLEXIBLE_DATA_CUSTOM);


                TypeIdentifier identifier;
                identifier._d(EK_MINIMAL);

                SerializedPayload_t payload(static_cast<uint32_t>(
                    MinimalEnumeratedType::getCdrSerializedSize(type_object->minimal().enumerated_type()) + 4));
                eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
                // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
                eprosima::fastcdr::Cdr ser(
                    fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                    eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
                payload.encapsulation = CDR_LE;

                type_object->serialize(ser);
                payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
                MD5 objectHash;
                objectHash.update((char*)payload.data, payload.length);
                objectHash.finalize();
                for(int i = 0; i < 14; ++i)
                {
                    identifier.equivalence_hash()[i] = objectHash.digest[i];
                }

                TypeObjectFactory::get_instance()->add_type_object("flexible_data_format", &identifier, type_object);
                delete type_object;
                return TypeObjectFactory::get_instance()->get_type_object("flexible_data_format", false);
            }

            const TypeObject* GetCompleteflexible_data_formatObject()
            {
                const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("flexible_data_format", true);
                if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
                {
                    return c_type_object;
                }

                TypeObject *type_object = new TypeObject();
                type_object->_d(EK_COMPLETE);
                type_object->complete()._d(TK_ENUM);

                // No flags apply
                //type_object->complete().enumerated_type().enum_flags().IS_FINAL(false);
                //type_object->complete().enumerated_type().enum_flags().IS_APPENDABLE(false);
                //type_object->complete().enumerated_type().enum_flags().IS_MUTABLE(false);
                //type_object->complete().enumerated_type().enum_flags().IS_NESTED(false);
                //type_object->complete().enumerated_type().enum_flags().IS_AUTOID_HASH(false);

                type_object->complete().enumerated_type().header().common().bit_bound(32); // TODO fixed by IDL, isn't?
                type_object->complete().enumerated_type().header().detail().type_name("flexible_data_format");


                uint32_t value = 0;
                CompleteEnumeratedLiteral cel_FLEXIBLE_DATA_JSON;
                cel_FLEXIBLE_DATA_JSON.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
                cel_FLEXIBLE_DATA_JSON.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
                cel_FLEXIBLE_DATA_JSON.common().flags().IS_EXTERNAL(false); // Doesn't apply
                cel_FLEXIBLE_DATA_JSON.common().flags().IS_OPTIONAL(false); // Doesn't apply
                cel_FLEXIBLE_DATA_JSON.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
                cel_FLEXIBLE_DATA_JSON.common().flags().IS_KEY(false); // Doesn't apply
                cel_FLEXIBLE_DATA_JSON.common().flags().IS_DEFAULT(false);
                cel_FLEXIBLE_DATA_JSON.common().value(value++);
                cel_FLEXIBLE_DATA_JSON.detail().name("FLEXIBLE_DATA_JSON");

                type_object->complete().enumerated_type().literal_seq().emplace_back(cel_FLEXIBLE_DATA_JSON);

                CompleteEnumeratedLiteral cel_FLEXIBLE_DATA_CBOR;
                cel_FLEXIBLE_DATA_CBOR.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CBOR.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CBOR.common().flags().IS_EXTERNAL(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CBOR.common().flags().IS_OPTIONAL(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CBOR.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CBOR.common().flags().IS_KEY(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CBOR.common().flags().IS_DEFAULT(false);
                cel_FLEXIBLE_DATA_CBOR.common().value(value++);
                cel_FLEXIBLE_DATA_CBOR.detail().name("FLEXIBLE_DATA_CBOR");

                type_object->complete().enumerated_type().literal_seq().emplace_back(cel_FLEXIBLE_DATA_CBOR);

                CompleteEnumeratedLiteral cel_FLEXIBLE_DATA_CUSTOM;
                cel_FLEXIBLE_DATA_CUSTOM.common().flags().TRY_CONSTRUCT1(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CUSTOM.common().flags().TRY_CONSTRUCT2(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_EXTERNAL(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_OPTIONAL(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_MUST_UNDERSTAND(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_KEY(false); // Doesn't apply
                cel_FLEXIBLE_DATA_CUSTOM.common().flags().IS_DEFAULT(false);
                cel_FLEXIBLE_DATA_CUSTOM.common().value(value++);
                cel_FLEXIBLE_DATA_CUSTOM.detail().name("FLEXIBLE_DATA_CUSTOM");

                type_object->complete().enumerated_type().literal_seq().emplace_back(cel_FLEXIBLE_DATA_CUSTOM);


                TypeIdentifier identifier;
                identifier._d(EK_COMPLETE);

                SerializedPayload_t payload(static_cast<uint32_t>(
                    CompleteEnumeratedType::getCdrSerializedSize(type_object->complete().enumerated_type()) + 4));
                eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
                // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
                eprosima::fastcdr::Cdr ser(
                    fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                    eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
                payload.encapsulation = CDR_LE;

                type_object->serialize(ser);
                payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
                MD5 objectHash;
                objectHash.update((char*)payload.data, payload.length);
                objectHash.finalize();
                for(int i = 0; i < 14; ++i)
                {
                    identifier.equivalence_hash()[i] = objectHash.digest[i];
                }

                TypeObjectFactory::get_instance()->add_type_object("flexible_data_format", &identifier, type_object);
                delete type_object;
                return TypeObjectFactory::get_instance()->get_type_object("flexible_data_format", true);
            }

            const TypeIdentifier* GetflexibleIdentifier(bool complete)
            {
                const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("flexible", complete);
                if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
                {
                    return c_identifier;
                }

                GetflexibleObject(complete); // Generated inside
                return TypeObjectFactory::get_instance()->get_type_identifier("flexible", complete);
            }

            const TypeObject* GetflexibleObject(bool complete)
            {
                const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("flexible", complete);
                if (c_type_object != nullptr)
                {
                    return c_type_object;
                }
                else if (complete)
                {
                    return GetCompleteflexibleObject();
                }
                //else
                return GetMinimalflexibleObject();
            }

            const TypeObject* GetMinimalflexibleObject()
            {
                const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("flexible", false);
                if (c_type_object != nullptr)
                {
                    return c_type_object;
                }

                TypeObject *type_object = new TypeObject();
                type_object->_d(EK_MINIMAL);
                type_object->minimal()._d(TK_STRUCTURE);

                type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
                type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
                type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
                type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
                type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

                MemberId memberId = 0;
                MinimalStructMember mst_data_format;
                mst_data_format.common().member_id(memberId++);
                mst_data_format.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                mst_data_format.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                mst_data_format.common().member_flags().IS_EXTERNAL(false); // Unsupported
                mst_data_format.common().member_flags().IS_OPTIONAL(false);
                mst_data_format.common().member_flags().IS_MUST_UNDERSTAND(false);
                mst_data_format.common().member_flags().IS_KEY(false);
                mst_data_format.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                mst_data_format.common().member_type_id(*realdds::topics::raw::Getflexible_data_formatIdentifier(false));
                MD5 data_format_hash("data_format");
                for(int i = 0; i < 4; ++i)
                {
                    mst_data_format.detail().name_hash()[i] = data_format_hash.digest[i];
                }
                type_object->minimal().struct_type().member_seq().emplace_back(mst_data_format);

                MinimalStructMember mst_version;
                mst_version.common().member_id(memberId++);
                mst_version.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                mst_version.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                mst_version.common().member_flags().IS_EXTERNAL(false); // Unsupported
                mst_version.common().member_flags().IS_OPTIONAL(false);
                mst_version.common().member_flags().IS_MUST_UNDERSTAND(false);
                mst_version.common().member_flags().IS_KEY(false);
                mst_version.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                mst_version.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint8_t", {4}, false));


                MD5 version_hash("version");
                for(int i = 0; i < 4; ++i)
                {
                    mst_version.detail().name_hash()[i] = version_hash.digest[i];
                }
                type_object->minimal().struct_type().member_seq().emplace_back(mst_version);

                MinimalStructMember mst_data;
                mst_data.common().member_id(memberId++);
                mst_data.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                mst_data.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                mst_data.common().member_flags().IS_EXTERNAL(false); // Unsupported
                mst_data.common().member_flags().IS_OPTIONAL(false);
                mst_data.common().member_flags().IS_MUST_UNDERSTAND(false);
                mst_data.common().member_flags().IS_KEY(false);
                mst_data.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                mst_data.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 4096, false));


                MD5 data_hash("data");
                for(int i = 0; i < 4; ++i)
                {
                    mst_data.detail().name_hash()[i] = data_hash.digest[i];
                }
                type_object->minimal().struct_type().member_seq().emplace_back(mst_data);


                // Header
                // TODO Inheritance
                //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
                //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];

                TypeIdentifier identifier;
                identifier._d(EK_MINIMAL);

                SerializedPayload_t payload(static_cast<uint32_t>(
                    MinimalStructType::getCdrSerializedSize(type_object->minimal().struct_type()) + 4));
                eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
                // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
                eprosima::fastcdr::Cdr ser(
                    fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                    eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
                payload.encapsulation = CDR_LE;

                type_object->serialize(ser);
                payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
                MD5 objectHash;
                objectHash.update((char*)payload.data, payload.length);
                objectHash.finalize();
                for(int i = 0; i < 14; ++i)
                {
                    identifier.equivalence_hash()[i] = objectHash.digest[i];
                }

                TypeObjectFactory::get_instance()->add_type_object("flexible", &identifier, type_object);
                delete type_object;
                return TypeObjectFactory::get_instance()->get_type_object("flexible", false);
            }

            const TypeObject* GetCompleteflexibleObject()
            {
                const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("flexible", true);
                if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
                {
                    return c_type_object;
                }

                TypeObject *type_object = new TypeObject();
                type_object->_d(EK_COMPLETE);
                type_object->complete()._d(TK_STRUCTURE);

                type_object->complete().struct_type().struct_flags().IS_FINAL(false);
                type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
                type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
                type_object->complete().struct_type().struct_flags().IS_NESTED(false);
                type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

                MemberId memberId = 0;
                CompleteStructMember cst_data_format;
                cst_data_format.common().member_id(memberId++);
                cst_data_format.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                cst_data_format.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                cst_data_format.common().member_flags().IS_EXTERNAL(false); // Unsupported
                cst_data_format.common().member_flags().IS_OPTIONAL(false);
                cst_data_format.common().member_flags().IS_MUST_UNDERSTAND(false);
                cst_data_format.common().member_flags().IS_KEY(false);
                cst_data_format.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                cst_data_format.common().member_type_id(*realdds::topics::raw::Getflexible_data_formatIdentifier(true));
                cst_data_format.detail().name("data_format");

                type_object->complete().struct_type().member_seq().emplace_back(cst_data_format);

                CompleteStructMember cst_version;
                cst_version.common().member_id(memberId++);
                cst_version.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                cst_version.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                cst_version.common().member_flags().IS_EXTERNAL(false); // Unsupported
                cst_version.common().member_flags().IS_OPTIONAL(false);
                cst_version.common().member_flags().IS_MUST_UNDERSTAND(false);
                cst_version.common().member_flags().IS_KEY(false);
                cst_version.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                cst_version.common().member_type_id(*TypeObjectFactory::get_instance()->get_array_identifier("uint8_t", {4}, true));


                cst_version.detail().name("version");

                type_object->complete().struct_type().member_seq().emplace_back(cst_version);

                CompleteStructMember cst_data;
                cst_data.common().member_id(memberId++);
                cst_data.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
                cst_data.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
                cst_data.common().member_flags().IS_EXTERNAL(false); // Unsupported
                cst_data.common().member_flags().IS_OPTIONAL(false);
                cst_data.common().member_flags().IS_MUST_UNDERSTAND(false);
                cst_data.common().member_flags().IS_KEY(false);
                cst_data.common().member_flags().IS_DEFAULT(false); // Doesn't apply
                cst_data.common().member_type_id(*TypeObjectFactory::get_instance()->get_sequence_identifier("uint8_t", 4096, true));


                cst_data.detail().name("data");

                type_object->complete().struct_type().member_seq().emplace_back(cst_data);


                // Header
                type_object->complete().struct_type().header().detail().type_name("flexible");
                // TODO inheritance


                TypeIdentifier identifier;
                identifier._d(EK_COMPLETE);

                SerializedPayload_t payload(static_cast<uint32_t>(
                    CompleteStructType::getCdrSerializedSize(type_object->complete().struct_type()) + 4));
                eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
                // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
                eprosima::fastcdr::Cdr ser(
                    fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
                    eprosima::fastcdr::Cdr::DDS_CDR); // Object that serializes the data.
                payload.encapsulation = CDR_LE;

                type_object->serialize(ser);
                payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
                MD5 objectHash;
                objectHash.update((char*)payload.data, payload.length);
                objectHash.finalize();
                for(int i = 0; i < 14; ++i)
                {
                    identifier.equivalence_hash()[i] = objectHash.digest[i];
                }

                TypeObjectFactory::get_instance()->add_type_object("flexible", &identifier, type_object);
                delete type_object;
                return TypeObjectFactory::get_instance()->get_type_object("flexible", true);
            }

        } // namespace raw
    } // namespace topics
} // namespace realdds