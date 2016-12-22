#include <stdint.h>
#include "ubt/bg_gattdb_def.h"

#ifdef __GNUC__
#define GATT_HEADER(F) F __attribute__ ((section (".gatt_header"))) 
#define GATT_DATA(F) F __attribute__ ((section (".gatt_data"))) 
#else
#ifdef __ICCARM__
#define GATT_HEADER(F) _Pragma("location=\".gatt_header\"") F 
#define GATT_DATA(F) _Pragma("location=\".gatt_data\"") F 
#else
#define GATT_HEADER(F) F 
#define GATT_DATA(F) F 
#endif
#endif

GATT_DATA(const uint16_t bg_gattdb_uuidtable_16_map [])=
{
    0x2800,
    0x2801,
    0x2803,
    0x1800,
    0x2a00,
    0x2a01,
    0x2901,
    0x2902,
};

GATT_DATA(const uint8_t bg_gattdb_uuidtable_128_map [])=
{
0xf9, 0x20, 0x36, 0xf1, 0x74, 0xbd, 0xb6, 0x8e, 0xd6, 0x45, 0x07, 0xef, 0xd7, 0x6f, 0x26, 0xf9, 
0xa3, 0x37, 0xfd, 0xc4, 0xb5, 0x3c, 0xe1, 0x88, 0xb4, 0x40, 0x84, 0x77, 0x02, 0xc1, 0x85, 0x45, 
};




GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_attribute_field_9 ) = {
	.len=2,
	.data={0x52,0x58,}
};
uint8_t bg_gattdb_attribute_field_7_data[20]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_attribute_field_7 ) = {
	.properties=0x10,
	.index=1,
	.max_len=20,
	.data=bg_gattdb_attribute_field_7_data,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_attribute_field_6 ) = {
	.len=19,
	.data={0x10,0x08,0x00,0xa3,0x37,0xfd,0xc4,0xb5,0x3c,0xe1,0x88,0xb4,0x40,0x84,0x77,0x02,0xc1,0x85,0x45,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_attribute_field_5 ) = {
	.len=16,
	.data={0xf9,0x20,0x36,0xf1,0x74,0xbd,0xb6,0x8e,0xd6,0x45,0x07,0xef,0xd7,0x6f,0x26,0xf9,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_attribute_field_4 ) = {
	.len=4,
	.data={0x34,0x31,0x34,0x32,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_attribute_field_3 ) = {
	.len=5,
	.data={0x02,0x05,0x00,0x01,0x2a,}
};
uint8_t bg_gattdb_attribute_field_2_data[19]={0x45,0x43,0x47,0x2d,0x53,0x65,0x6e,0x73,0x6f,0x72,0x20,0x38,0x30,0x36,0x30,0x38,0x34,0x31,0x43,};
GATT_DATA(const struct bg_gattdb_attribute_chrvalue	bg_gattdb_attribute_field_2 ) = {
	.properties=0x02,
	.index=0,
	.max_len=19,
	.data=bg_gattdb_attribute_field_2_data,
};

GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_attribute_field_1 ) = {
	.len=5,
	.data={0x02,0x03,0x00,0x00,0x2a,}
};
GATT_DATA(const struct bg_gattdb_buffer_with_len	bg_gattdb_attribute_field_0 ) = {
	.len=2,
	.data={0x00,0x18,}
};
GATT_DATA(const struct bg_gattdb_attribute bg_gattdb_attributes_map[])={
    {.uuid=0x0000,.permissions=0x01,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_attribute_field_0},
    {.uuid=0x0002,.permissions=0x01,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_attribute_field_1},
    {.uuid=0x0004,.permissions=0x01,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_attribute_field_2},
    {.uuid=0x0002,.permissions=0x01,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_attribute_field_3},
    {.uuid=0x0005,.permissions=0x01,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_attribute_field_4},
    {.uuid=0x0000,.permissions=0x01,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_attribute_field_5},
    {.uuid=0x0002,.permissions=0x01,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_attribute_field_6},
    {.uuid=0x8001,.permissions=0x00,.datatype=0x01,.min_key_size=0x00,.dynamicdata=&bg_gattdb_attribute_field_7},
    {.uuid=0x0007,.permissions=0x07,.datatype=0x03,.min_key_size=0x00,.configdata={.flags=0x01,.index=0x01}},
    {.uuid=0x0006,.permissions=0x01,.datatype=0x00,.min_key_size=0x00,.constdata=&bg_gattdb_attribute_field_9},
};

GATT_DATA(const uint16_t bg_gattdb_attributes_dynamic_mapping_map[])={
	0x0003,
	0x0008,
};

GATT_DATA(const uint8_t bg_gattdb_adv_uuid16_map[])={0x0};
GATT_DATA(const uint8_t bg_gattdb_adv_uuid128_map[])={0xf9, 0x20, 0x36, 0xf1, 0x74, 0xbd, 0xb6, 0x8e, 0xd6, 0x45, 0x07, 0xef, 0xd7, 0x6f, 0x26, 0xf9, };
GATT_HEADER(const struct bg_gattdb_def bg_gattdb_data )={
    .attributes=bg_gattdb_attributes_map,
    .attributes_max=10,
    .uuidtable_16_size=8,
    .uuidtable_16=bg_gattdb_uuidtable_16_map,
    .uuidtable_128_size=2,
    .uuidtable_128=bg_gattdb_uuidtable_128_map,
    .attributes_dynamic_max=2,
    .attributes_dynamic_mapping=bg_gattdb_attributes_dynamic_mapping_map,
    .adv_uuid16=bg_gattdb_adv_uuid16_map,
    .adv_uuid16_num=0,
    .adv_uuid128=bg_gattdb_adv_uuid128_map,
    .adv_uuid128_num=1,
};

const struct bg_gattdb_def *bg_gattdb=&bg_gattdb_data;
