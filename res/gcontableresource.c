#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.gcontableresource"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[2264]; const double alignment; void * const ptr;}  gcontableresource_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0xd4, 0xb5, 0x02, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0x90, 0x00, 0x00, 0x00, 0x01, 0x00, 0x4c, 0x00, 
  0x94, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 
  0xd9, 0x9b, 0x30, 0x65, 0x02, 0x00, 0x00, 0x00, 
  0x98, 0x00, 0x00, 0x00, 0x12, 0x00, 0x76, 0x00, 
  0xb0, 0x00, 0x00, 0x00, 0xbf, 0x08, 0x00, 0x00, 
  0x06, 0x4a, 0x11, 0x75, 0x03, 0x00, 0x00, 0x00, 
  0xbf, 0x08, 0x00, 0x00, 0x04, 0x00, 0x4c, 0x00, 
  0xc4, 0x08, 0x00, 0x00, 0xc8, 0x08, 0x00, 0x00, 
  0x92, 0xd6, 0x89, 0xad, 0x00, 0x00, 0x00, 0x00, 
  0xc8, 0x08, 0x00, 0x00, 0x0a, 0x00, 0x4c, 0x00, 
  0xd4, 0x08, 0x00, 0x00, 0xd8, 0x08, 0x00, 0x00, 
  0x2f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x67, 0x63, 0x6f, 0x6e, 0x74, 0x61, 0x62, 0x6c, 
  0x65, 0x77, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x2e, 
  0x75, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x84, 0x2d, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xed, 0x5a, 0x4b, 0x8f, 0xdb, 0x36, 
  0x10, 0xbe, 0xef, 0xaf, 0x50, 0x75, 0x2d, 0xb4, 
  0xda, 0x4d, 0x80, 0xa0, 0x07, 0x59, 0x41, 0x77, 
  0xd1, 0x4d, 0x7b, 0x08, 0x10, 0x24, 0x4e, 0x7b, 
  0x14, 0x28, 0x69, 0x6c, 0x33, 0xa6, 0x48, 0x95, 
  0xa4, 0xd6, 0x76, 0x7e, 0x7d, 0x49, 0x4a, 0xf6, 
  0xca, 0xd6, 0xdb, 0xaf, 0xae, 0x13, 0xdf, 0x2c, 
  0x91, 0x43, 0xce, 0x7c, 0xf3, 0xe0, 0x37, 0x94, 
  0xbd, 0xf7, 0xcb, 0x84, 0x58, 0xcf, 0xc0, 0x05, 
  0x66, 0x74, 0x64, 0xdf, 0xdf, 0xde, 0xd9, 0x16, 
  0xd0, 0x88, 0xc5, 0x98, 0x4e, 0x47, 0xf6, 0xd7, 
  0xf1, 0x93, 0xf3, 0x9b, 0xfd, 0xde, 0xbf, 0xf1, 
  0x7e, 0x71, 0x1c, 0xeb, 0x03, 0x50, 0xe0, 0x48, 
  0x42, 0x6c, 0x2d, 0xb0, 0x9c, 0x59, 0x53, 0x82, 
  0x62, 0xb0, 0xde, 0xde, 0xbe, 0xb9, 0xbb, 0xbd, 
  0xb3, 0x1c, 0x47, 0x4d, 0xc2, 0x54, 0x02, 0x9f, 
  0xa0, 0x08, 0xfc, 0x1b, 0xcb, 0xf2, 0x38, 0xfc, 
  0x9b, 0x61, 0x0e, 0xc2, 0x22, 0x38, 0x1c, 0xd9, 
  0x53, 0x39, 0xff, 0xd5, 0x7e, 0xd9, 0x48, 0x8b, 
  0xd9, 0xae, 0x99, 0xc7, 0xc2, 0x6f, 0x10, 0x49, 
  0x2b, 0x22, 0x48, 0x88, 0x91, 0xfd, 0x41, 0xce, 
  0xc7, 0x1c, 0xe0, 0x8b, 0x64, 0x1c, 0x6c, 0x0b, 
  0xc7, 0x23, 0x3b, 0x41, 0x98, 0x06, 0xc2, 0x3c, 
  0xeb, 0xf9, 0x4a, 0x22, 0x62, 0x24, 0x4b, 0xa8, 
  0xc8, 0x9f, 0xd4, 0xb3, 0x56, 0x2e, 0x7f, 0xe7, 
  0x50, 0x94, 0x80, 0x85, 0x23, 0x56, 0xfc, 0xd2, 
  0x6a, 0x15, 0x93, 0xf2, 0x09, 0x96, 0x5c, 0xa5, 
  0xa0, 0xb4, 0x89, 0x66, 0x88, 0x23, 0xce, 0xd1, 
  0x2a, 0x57, 0xa2, 0x76, 0x19, 0x89, 0x25, 0x39, 
  0x70, 0x09, 0xca, 0xe2, 0x96, 0x15, 0x52, 0x66, 
  0x10, 0x5b, 0xcb, 0x7b, 0x6e, 0xc9, 0x30, 0xcf, 
  0xcd, 0x71, 0x69, 0x86, 0xe8, 0xa3, 0x5a, 0x9b, 
  0x3c, 0x61, 0xa2, 0x57, 0x30, 0x40, 0xa5, 0x44, 
  0x41, 0xbf, 0x8d, 0x54, 0xca, 0x59, 0x0a, 0x5c, 
  0xae, 0x2c, 0xad, 0xcd, 0xc8, 0x8e, 0x66, 0x98, 
  0xc4, 0x41, 0xa2, 0x05, 0x6d, 0xff, 0x05, 0x57, 
  0xcf, 0x5d, 0xcf, 0xab, 0xec, 0x2c, 0x21, 0x51, 
  0xcb, 0x4a, 0xd8, 0xec, 0xfd, 0xc8, 0xa8, 0x44, 
  0x21, 0x81, 0x7f, 0x30, 0x8d, 0xd9, 0xc2, 0xb6, 
  0x52, 0xc4, 0x81, 0x4a, 0xa3, 0xd4, 0xef, 0x69, 
  0x4a, 0x70, 0x84, 0xa4, 0x72, 0x70, 0x31, 0xda, 
  0xa0, 0x05, 0xa2, 0xc1, 0x84, 0x45, 0x99, 0xb0, 
  0xfd, 0x27, 0x44, 0xc4, 0xce, 0xf6, 0xd5, 0xf9, 
  0x62, 0xc6, 0x16, 0x41, 0x02, 0x34, 0x0b, 0x11, 
  0x6f, 0x12, 0x31, 0x96, 0x6d, 0x60, 0xae, 0xe0, 
  0xf5, 0x09, 0x51, 0x88, 0x0b, 0x94, 0xf4, 0xcf, 
  0x40, 0x1b, 0x6f, 0xaf, 0xe7, 0x57, 0xb7, 0x7c, 
  0xc6, 0x02, 0x2b, 0x23, 0x6d, 0x7f, 0xcc, 0xb3, 
  0xca, 0x66, 0x1d, 0x36, 0x35, 0x8a, 0x6c, 0xe9, 
  0x58, 0xaf, 0xe7, 0x03, 0x5b, 0x96, 0x7d, 0x19, 
  0xaa, 0xc7, 0xb2, 0xc0, 0x1e, 0x8a, 0xee, 0xe3, 
  0x80, 0x26, 0x39, 0xc6, 0xb1, 0xf2, 0xb5, 0x71, 
  0xb0, 0xed, 0xab, 0x54, 0x96, 0xca, 0xdb, 0xa4, 
  0x51, 0xb8, 0x62, 0x6e, 0xbd, 0xc9, 0x5f, 0x00, 
  0xf1, 0x68, 0xf6, 0x80, 0xb6, 0x83, 0xd8, 0xbc, 
  0x0c, 0x8c, 0xc3, 0x77, 0x56, 0xd8, 0x13, 0x83, 
  0x3a, 0x41, 0x94, 0xa6, 0x41, 0xaa, 0x02, 0xc1, 
  0x04, 0xf4, 0x70, 0xf1, 0xbe, 0x30, 0xd6, 0xc6, 
  0x74, 0x6e, 0xa0, 0x4e, 0xc5, 0x00, 0xa8, 0xde, 
  0x3f, 0xee, 0xa1, 0x40, 0x2d, 0xa4, 0x6d, 0xb0, 
  0xfe, 0x41, 0x25, 0x5f, 0xd5, 0x00, 0x0b, 0xe6, 
  0x7d, 0xdd, 0x4a, 0x07, 0xc0, 0xbb, 0x67, 0x5e, 
  0xb4, 0x89, 0xa7, 0x1c, 0x27, 0x88, 0xaf, 0x02, 
  0x5d, 0xd1, 0x03, 0xfd, 0xca, 0xf6, 0x21, 0xc6, 
  0xd2, 0x99, 0xa8, 0xfa, 0xe2, 0x88, 0x55, 0x12, 
  0x32, 0x55, 0x71, 0x0e, 0x5a, 0x14, 0x45, 0x12, 
  0x3f, 0xa3, 0x22, 0x02, 0x3a, 0xdd, 0xd8, 0xb9, 
  0x9c, 0x00, 0x2a, 0xb0, 0x5a, 0xb1, 0xdf, 0x62, 
  0xe5, 0x52, 0xbb, 0x3b, 0x52, 0x9f, 0x3e, 0x0d, 
  0x02, 0x5e, 0x8a, 0xa2, 0xb9, 0x3a, 0xb2, 0xbb, 
  0x03, 0x0f, 0x96, 0xaa, 0x00, 0xc6, 0x7b, 0x44, 
  0xec, 0x04, 0x13, 0x32, 0x3c, 0x47, 0x52, 0xa6, 
  0xe1, 0xd0, 0xf5, 0xe2, 0xae, 0x59, 0x4c, 0x8d, 
  0xd4, 0xa9, 0x5f, 0x8b, 0x41, 0xef, 0xb2, 0x12, 
  0x71, 0x46, 0x54, 0x56, 0xad, 0xcf, 0xa9, 0x52, 
  0x0a, 0x98, 0x91, 0x45, 0xf9, 0x84, 0x3a, 0x49, 
  0x75, 0x19, 0x10, 0xfa, 0x43, 0x12, 0x5b, 0x1f, 
  0xfd, 0x7f, 0x63, 0xd8, 0x32, 0x69, 0x81, 0xe3, 
  0x29, 0xc8, 0x0b, 0xc8, 0xe7, 0x82, 0x7a, 0x94, 
  0x98, 0xca, 0xd0, 0x15, 0x66, 0xa0, 0x58, 0x27, 
  0x17, 0xc1, 0xc6, 0x8a, 0x7e, 0x39, 0x6b, 0x00, 
  0xb6, 0x0c, 0xdd, 0xa2, 0x88, 0x38, 0xe6, 0x51, 
  0x57, 0x61, 0xa2, 0xc0, 0x35, 0xe1, 0x59, 0x2b, 
  0xd6, 0xc8, 0x4e, 0x37, 0x72, 0x6e, 0xc3, 0x7e, 
  0x6e, 0xa3, 0x47, 0xdb, 0xbc, 0xdd, 0xee, 0xf1, 
  0x47, 0xc3, 0x0e, 0x1b, 0x55, 0xad, 0x62, 0x65, 
  0x08, 0xac, 0x6d, 0x49, 0x8e, 0xa8, 0x20, 0x79, 
  0x8d, 0x1b, 0xd9, 0x2b, 0x50, 0xbe, 0xcb, 0x89, 
  0x66, 0x17, 0x6a, 0xdd, 0xca, 0xd6, 0x2b, 0xfc, 
  0x08, 0x84, 0x7c, 0x06, 0xaa, 0xfc, 0x04, 0xfc, 
  0x13, 0x5e, 0x86, 0xd9, 0xa4, 0x1c, 0xac, 0x91, 
  0x1a, 0x35, 0xc5, 0xb2, 0x09, 0xbc, 0x62, 0x59, 
  0x24, 0x25, 0xc7, 0x61, 0x26, 0x41, 0xb4, 0x4d, 
  0x2b, 0x4f, 0x2c, 0xcc, 0xde, 0xd0, 0x7f, 0x53, 
  0x74, 0x36, 0xa3, 0xad, 0x9b, 0xb9, 0x7d, 0x76, 
  0x6b, 0xf5, 0xea, 0x31, 0xc0, 0x1a, 0xc3, 0x52, 
  0x56, 0xa0, 0xca, 0xbd, 0x78, 0x22, 0xac, 0xa4, 
  0xde, 0xd1, 0xbf, 0x3f, 0x27, 0x4c, 0xcd, 0x87, 
  0x5e, 0x87, 0xf0, 0xff, 0x78, 0x5a, 0x0e, 0xad, 
  0xfd, 0x87, 0x1e, 0x96, 0xf7, 0xc7, 0x38, 0x2c, 
  0xeb, 0xcc, 0xaf, 0x37, 0x7d, 0x57, 0x11, 0xd5, 
  0xb5, 0xe3, 0xef, 0x30, 0xb0, 0x3b, 0x10, 0x33, 
  0x8e, 0xe9, 0xbc, 0x55, 0xa8, 0x46, 0xf7, 0x8a, 
  0xde, 0x7d, 0xdb, 0xa4, 0x9f, 0xac, 0x2f, 0x2a, 
  0xd8, 0xe5, 0x8f, 0xde, 0x16, 0xe9, 0x56, 0x3f, 
  0x22, 0x4c, 0xa8, 0xde, 0x37, 0x93, 0x52, 0xe3, 
  0x79, 0xd2, 0xa6, 0xa8, 0x8c, 0xea, 0xb5, 0x27, 
  0xba, 0xf6, 0x44, 0x3f, 0x5f, 0x4f, 0x94, 0x7b, 
  0xe8, 0xb2, 0x5b, 0xa2, 0xbf, 0x94, 0x0d, 0x2f, 
  0x2d, 0x91, 0xb1, 0xe8, 0x72, 0x3a, 0x22, 0xc4, 
  0xa7, 0xfa, 0x2a, 0xf2, 0xdd, 0x19, 0x5a, 0xa9, 
  0x81, 0x7d, 0x47, 0x13, 0x8d, 0x37, 0x00, 0x6b, 
  0x6a, 0x3a, 0xa0, 0x15, 0x51, 0x0a, 0x46, 0xf3, 
  0x20, 0x67, 0x15, 0xef, 0xba, 0xfb, 0x8e, 0x76, 
  0x8e, 0xd8, 0x93, 0xf0, 0x1e, 0xda, 0x18, 0x74, 
  0xb3, 0xdd, 0xa3, 0xb6, 0x79, 0xf5, 0x8d, 0x80, 
  0x01, 0xdb, 0xb0, 0x74, 0xf7, 0xb8, 0x60, 0xf4, 
  0x67, 0xfe, 0x07, 0xe1, 0x70, 0x25, 0xed, 0xe7, 
  0x26, 0xed, 0x43, 0x18, 0xef, 0x9a, 0xb3, 0x37, 
  0xcb, 0x74, 0x53, 0xf6, 0x6d, 0x8d, 0xb7, 0x06, 
  0x8b, 0x6b, 0x97, 0xfc, 0x73, 0x97, 0xe9, 0x63, 
  0xcb, 0xd4, 0xb5, 0x9a, 0x02, 0x7f, 0x9a, 0xcb, 
  0x9d, 0x87, 0x2d, 0x7a, 0x7b, 0xcc, 0x4f, 0x33, 
  0x8d, 0x07, 0x7c, 0xfd, 0xcd, 0x89, 0xbf, 0xf9, 
  0xda, 0xd5, 0x47, 0x46, 0x64, 0x61, 0x21, 0xf6, 
  0x19, 0xe1, 0xef, 0xbd, 0x24, 0xfa, 0xb3, 0xdd, 
  0x4b, 0xe8, 0x8a, 0x7a, 0xb2, 0x90, 0x87, 0xdc, 
  0x54, 0x53, 0xdd, 0x42, 0x15, 0x5b, 0x1b, 0xdb, 
  0x5f, 0x07, 0xef, 0xa8, 0x64, 0x55, 0x04, 0x8a, 
  0xba, 0x8a, 0x20, 0x86, 0x09, 0xca, 0x88, 0x3c, 
  0x32, 0x73, 0x49, 0xd0, 0x14, 0xce, 0xcc, 0x52, 
  0xf6, 0x22, 0xf4, 0xa5, 0x66, 0x63, 0xca, 0x9c, 
  0x94, 0xc3, 0x33, 0x66, 0x99, 0xe8, 0xd9, 0x6e, 
  0x5c, 0x29, 0xfd, 0xc9, 0x28, 0x7d, 0x39, 0x99, 
  0xa8, 0x3a, 0xd1, 0xaf, 0xc9, 0x74, 0x71, 0xc9, 
  0xa4, 0xdd, 0x76, 0x4d, 0xa4, 0xd3, 0xb0, 0x29, 
  0xf5, 0x52, 0xc8, 0x15, 0xa9, 0x50, 0x5b, 0xcf, 
  0x44, 0x4d, 0xb1, 0x27, 0x51, 0x14, 0x08, 0xe2, 
  0x5d, 0x7e, 0xed, 0xb9, 0x15, 0xc9, 0x2a, 0x9a, 
  0xfb, 0xdd, 0x5e, 0x96, 0x72, 0x36, 0x4b, 0xeb, 
  0x33, 0xf6, 0xd8, 0x27, 0xf7, 0x10, 0xb1, 0x61, 
  0x59, 0xda, 0xb7, 0x52, 0x35, 0x65, 0xe7, 0x29, 
  0xea, 0xd2, 0xe0, 0x60, 0xdd, 0xce, 0xc8, 0x2c, 
  0xed, 0x91, 0x8f, 0xf5, 0xa9, 0x75, 0x54, 0x46, 
  0xdf, 0x99, 0x0c, 0xc7, 0xba, 0x4f, 0xff, 0x08, 
  0x34, 0x2b, 0x47, 0xa5, 0xfe, 0xb3, 0xd5, 0x35, 
  0x2e, 0x5f, 0x57, 0x5c, 0xaa, 0xf7, 0xd4, 0xd1, 
  0x8e, 0x79, 0x6d, 0xb1, 0xf9, 0xe6, 0xb4, 0xb1, 
  0x39, 0x66, 0xd3, 0x29, 0x81, 0x72, 0x74, 0xae, 
  0xbf, 0x82, 0x5c, 0xe3, 0xf3, 0x35, 0xc5, 0xe7, 
  0x90, 0x6f, 0x10, 0xe7, 0x88, 0x4f, 0xdd, 0x59, 
  0xea, 0x8b, 0x07, 0xa5, 0x19, 0x8d, 0xfb, 0xba, 
  0xf0, 0x25, 0xaa, 0xdf, 0x1e, 0xfd, 0x3a, 0xc4, 
  0x73, 0xd7, 0x7f, 0xa6, 0xf5, 0x6f, 0x3c, 0xb7, 
  0xf4, 0x5f, 0xe9, 0xff, 0x00, 0x3e, 0x6d, 0xb9, 
  0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x67, 
  0x75, 0x69, 0x2f, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x67, 0x63, 0x6f, 0x6e, 0x74, 0x61, 0x62, 0x6c, 
  0x65, 0x2f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { gcontableresource_resource_data.data, sizeof (gcontableresource_resource_data.data), NULL, NULL, NULL };
extern GResource *gcontableresource_get_resource (void);
GResource *gcontableresource_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for Win32 (x86) and x64 programs, as symbols on Win32 are prefixed
 * with an underscore but symbols on x64 are not.
 */
#ifdef _WIN64
#define G_MSVC_SYMBOL_PREFIX ""
#else
#define G_MSVC_SYMBOL_PREFIX "_"
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}