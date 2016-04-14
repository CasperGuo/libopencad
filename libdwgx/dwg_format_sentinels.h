#ifndef __DWG_FORMAT_SENTINELS_H__
#define __DWG_FORMAT_SENTINELS_H__

class DWG_SENTINELS
{
public:
    static const size_t SENTINEL_LENGTH = 16;

    static constexpr const char * HEADER_VARIABLES_START
        = "\xCF\x7B\x1F\x23\xFD\xDE\x38\xA9\x5F\x7C\x68\xB8\x4E\x6D\x33\x5F";
    static constexpr const char * HEADER_VARIABLES_END
        = "\x30\x84\xE0\xDC\x02\x21\xC7\x56\xA0\x83\x97\x47\xB1\x92\xCC\xA0";

    static constexpr const char * DS_PREVIEW_START
        = "\x1F\x25\x6D\x07\xD4\x36\x28\x28\x9D\x57\xCA\x3F\x9D\x44\x10\x2B";
    static constexpr const char* DS_PREVIEW_END
        = "\xE0\xDA\x92\xF8\x2B\xc9\xD7\xD7\x62\xA8\x35\xC0\x62\xBB\xEF\xD4";

    static constexpr const char * DS_CLASSES_START
        = "\x8D\xA1\xC4\xB8\xC4\xA9\xF8\xC5\xC0\xDC\xF4\x5F\xE7\xCF\xB6\x8A";
    static constexpr const char * DS_CLASSES_END
        = "\x72\x5E\x3B\x47\x3B\x56\x07\x3A\x3F\x23\x0B\xA0\x18\x30\x49\x75";

    static constexpr const char * SECOND_FILE_HEADER_START
        = "\xD4\x7B\x21\xCE\x28\x93\x9F\xBF\x53\x24\x40\x09\x12\x3C\xAA\x01";
    static constexpr const char * SECOND_FILE_HEADER_END
        = "\x2B\x84\xDE\x31\xD7\x6C\x60\x40\xAC\xDB\xBF\xF6\xED\xC3\x55\xFE";
};

#endif