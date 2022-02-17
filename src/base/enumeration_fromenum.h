/****************************************************************************
** Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#pragma once

#include "enumeration.h"
#include "meta_enum.h"

// --
// -- Implementation of template function Enumeration::fromType()
// --

namespace Mayo {

template<typename ENUM>
struct EnumNames {
    static inline const std::string_view trContext = "";
    static inline const std::string_view junkPrefix = "";
};

template<typename ENUM>
Enumeration Enumeration::fromType()
{
    const bool hasJunkPrefix = !EnumNames<ENUM>::junkPrefix.empty();
    Enumeration enumObject;
    for (const ENUM value : MetaEnum::values<ENUM>()) {
        std::string_view key =
                hasJunkPrefix ?
                    MetaEnum::nameWithoutPrefix<ENUM>(value, EnumNames<ENUM>::junkPrefix) :
                    MetaEnum::name<ENUM>(value);
        const TextId keyTextId = { EnumNames<ENUM>::trContext, key };
        enumObject.addItem(int(value), keyTextId);
    }

    return enumObject;
}

} // namespace Mayo
