/****************************************************************************
** Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#pragma once

// Workaround bug https://bugreports.qt.io/browse/QTBUG-73263 which affects GCC builds
#ifndef Q_MOC_RUN
#  include <filesystem>
#endif

namespace Mayo {

using FilePath = std::filesystem::path;

// Exception-safe version of std::filesystem::file_size()
inline uintmax_t filepathFileSize(const FilePath& fp) {
    std::error_code ec;
    return std::filesystem::file_size(fp, ec);
}

// Exception-safe version of std::filesystem::canonical()
inline FilePath filepathCanonical(const FilePath& fp) {
    try {
        return std::filesystem::canonical(fp);
    } catch (...) { // fs::canonical() might throw on non-existing files
        return fp;
    }
}

// Exception-safe version of std::filesystem::equivalent()
inline bool filepathExists(const FilePath& fp) {
    try {
        return std::filesystem::exists(fp);
    } catch (...) { // fs::exists() might throw on non-existing files
        return false;
    }
}

// Exception-safe version of std::filesystem::equivalent()
inline bool filepathEquivalent(const FilePath& lhs, const FilePath& rhs) {
    try {
        if (lhs == rhs)
            return true;
        else
            return std::filesystem::equivalent(lhs, rhs);
    } catch (...) { // fs::equivalent() might throw on non-existing files
        return false;
    }
}

// Exception-safe version of std::filesystem::is_regular_file()
inline bool filepathIsRegularFile(const FilePath& fp) {
    try {
        return std::filesystem::is_regular_file(fp);
    } catch (...) {
        return false;
    }
}

} // namespace Mayo
